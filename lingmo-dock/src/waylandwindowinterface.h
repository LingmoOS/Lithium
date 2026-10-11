#ifndef WAYLANDWINDOWINTERFACE_H
#define WAYLANDWINDOWINTERFACE_H

#include <QHash>
#include <QMap>
#include <QObject>
#include <QRect>
#include <QVariant>

#include "applicationitem.h"

#ifdef HAVE_KWAYLAND
namespace KWayland
{
namespace Client
{
class ConnectionThread;
class Registry;
class PlasmaWindowManagement;
class PlasmaWindow;
}
}
#endif

/**
 * @brief Wayland window list/control backend for the dock.
 *
 * Uses KWin's plasma-window-management protocol (through KWayland), which is
 * also what Plasma's own task manager listens to.  Window ids handed out to
 * the model are opaque: the protocol has no X11 window ids, so a stable
 * quint64 is derived from the window's uuid.
 */
class WaylandWindowInterface : public QObject
{
    Q_OBJECT

public:
    explicit WaylandWindowInterface(QObject *parent = nullptr);

    quint64 activeWindow();
    void minimizeWindow(quint64 win);
    void closeWindow(quint64 id);
    void forceActiveWindow(quint64 win);

    QMap<QString, QVariant> requestInfo(quint64 wid);
    QString requestWindowClass(quint64 wid);
    bool isAcceptableWindow(quint64 wid);

    void startInitWindows();

    QString desktopFilePath(quint64 wid);

    void setIconGeometry(quint64 wid, const QRect &rect);

signals:
    void windowAdded(quint64 wid);
    void windowRemoved(quint64 wid);
    void activeChanged(quint64 wid);

private:
    void init();

#ifdef HAVE_KWAYLAND
    void addWindow(KWayland::Client::PlasmaWindow *window);
    KWayland::Client::PlasmaWindow *windowForId(quint64 id) const;
    static quint64 idForWindow(const KWayland::Client::PlasmaWindow *window);

    KWayland::Client::ConnectionThread *m_connection = nullptr;
    KWayland::Client::Registry *m_registry = nullptr;
    KWayland::Client::PlasmaWindowManagement *m_management = nullptr;
#endif
    QHash<quint64, KWayland::Client::PlasmaWindow *> m_windows;
    bool m_initialized = false;
};

#endif // WAYLANDWINDOWINTERFACE_H
