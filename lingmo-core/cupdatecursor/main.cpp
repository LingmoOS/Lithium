#include <QGuiApplication>
#include <QtGui/private/qtx11extras_p.h>
#include <QFile>
#include <QDebug>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QSettings>
#include <QStandardPaths>

#include <X11/X.h>
#include <X11/Xcursor/Xcursor.h>

// KWin (both sessions) reads the cursor theme and size from kcminputrc.
inline void applyKdeSettings(const QString &theme, int size)
{
    QSettings settings(QStandardPaths::writableLocation(QStandardPaths::ConfigLocation) + "/kcminputrc",
                       QSettings::IniFormat);
    settings.beginGroup("Mouse");
    settings.setValue("cursorTheme", theme);
    settings.setValue("cursorSize", size);
    settings.endGroup();
    settings.sync();
}

// X11 only: also apply the theme to the X server so already running clients
// pick it up immediately.
inline void applyXCursor(const QString &theme, int size)
{
    Display *display = QX11Info::display();

    if (!theme.isEmpty())
        XcursorSetTheme(display, QFile::encodeName(theme));

    if (size > 0)
        XcursorSetDefaultSize(display, size);

    Cursor handle = XcursorLibraryLoadCursor(display, "left_ptr");
    XDefineCursor(display, DefaultRootWindow(display), handle);
    XFreeCursor(display, handle);
    XFlush(display);
}

inline void applyTheme(const QString &theme, int size)
{
    if (QX11Info::isPlatformX11())
        applyXCursor(theme, size);

    applyKdeSettings(theme, size);
}

// Ask KWin to re-read its configuration (Wayland: this is what makes the
// compositor actually switch the cursor).
inline void reloadKWin()
{
    if (QX11Info::isPlatformX11())
        return;

    QDBusMessage message = QDBusMessage::createSignal(QStringLiteral("/KWin"),
                                                      QStringLiteral("org.kde.KWin"),
                                                      QStringLiteral("reconfigure"));
    QDBusConnection::sessionBus().send(message);
}

int main(int argc, char *argv[])
{
    QGuiApplication::setDesktopSettingsAware(false);
    QGuiApplication a(argc, argv);

    if (argc != 3)
        return 1;

    const QString theme = QFile::decodeName(argv[1]);
    const int size = QString::fromLocal8Bit(argv[2]).toInt();

    // Wayland: no X cursor to patch, but kcminputrc + a KWin reconfigure is
    // exactly what the compositor needs; X11: both paths are applied.
    applyTheme(theme, size);
    reloadKWin();

    return 0;
}
