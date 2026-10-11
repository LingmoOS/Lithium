#include "waylandwindowinterface.h"

#include "utils.h"

#include <QGuiApplication>
#include <QDebug>

#ifdef HAVE_KWAYLAND
#include <KWayland/Client/connection_thread.h>
#include <KWayland/Client/plasmawindowmanagement.h>
#include <KWayland/Client/registry.h>
#endif

WaylandWindowInterface::WaylandWindowInterface(QObject *parent)
    : QObject(parent)
{
    init();
}

void WaylandWindowInterface::init()
{
#ifdef HAVE_KWAYLAND
    using namespace KWayland::Client;

    // Reuse the wl_display Qt already owns; this is a Wayland session only
    // path (the facade only creates us when isWayland() is true).
    m_connection = ConnectionThread::fromApplication(this);
    if (!m_connection) {
        qWarning() << "lingmo-dock: no Wayland connection, task list disabled";
        return;
    }

    m_registry = new Registry(this);

    connect(m_registry, &Registry::plasmaWindowManagementAnnounced, this,
            [this](quint32 name, quint32 version) {
                Q_UNUSED(name)
                Q_UNUSED(version)
                m_management = m_registry->createPlasmaWindowManagement(name, version, this);
                if (!m_management)
                    return;

                connect(m_management, &PlasmaWindowManagement::windowCreated,
                        this, &WaylandWindowInterface::addWindow);
                connect(m_management, &PlasmaWindowManagement::activeWindowChanged,
                        this, [this]() {
                            emit activeChanged(activeWindow());
                        });
                connect(m_connection, &ConnectionThread::connectionDied, m_management,
                        &PlasmaWindowManagement::destroy);
                m_initialized = true;
                startInitWindows();
            });

    // KWayland: create() binds wl_registry, setup() starts the announcements.
    m_registry->create(m_connection);
    m_registry->setup();
#else
    qWarning() << "lingmo-dock: built without KWayland, no Wayland task list";
#endif
}

void WaylandWindowInterface::startInitWindows()
{
#ifdef HAVE_KWAYLAND
    if (!m_management)
        return;

    const auto windows = m_management->windows();
    for (KWayland::Client::PlasmaWindow *window : windows)
        addWindow(window);
#endif
}

#ifdef HAVE_KWAYLAND
quint64 WaylandWindowInterface::idForWindow(const KWayland::Client::PlasmaWindow *window)
{
    // No X11 window id exists on Wayland; uuid() is stable per window.
    return qHash(window->uuid(), 0);
}

KWayland::Client::PlasmaWindow *WaylandWindowInterface::windowForId(quint64 id) const
{
    return m_windows.value(id, nullptr);
}

void WaylandWindowInterface::addWindow(KWayland::Client::PlasmaWindow *window)
{
    if (!window)
        return;

    const quint64 id = idForWindow(window);
    if (m_windows.contains(id))
        return;

    m_windows.insert(id, window);

    // The protocol deletes the object when the window is unmapped.
    connect(window, &QObject::destroyed, this, [this, id]() {
        m_windows.remove(id);
        emit windowRemoved(id);
    });
    connect(window, &KWayland::Client::PlasmaWindow::titleChanged, this, [this, id, window]() {
        Q_UNUSED(window)
        Q_UNUSED(id)
    });

    if (isAcceptableWindow(id))
        emit windowAdded(id);
}
#endif

quint64 WaylandWindowInterface::activeWindow()
{
#ifdef HAVE_KWAYLAND
    if (!m_management)
        return 0;

    KWayland::Client::PlasmaWindow *active = m_management->activeWindow();
    return active ? idForWindow(active) : 0;
#else
    return 0;
#endif
}

void WaylandWindowInterface::minimizeWindow(quint64 win)
{
#ifdef HAVE_KWAYLAND
    if (auto *window = windowForId(win))
        window->requestToggleMinimized();
#else
    Q_UNUSED(win)
#endif
}

void WaylandWindowInterface::closeWindow(quint64 id)
{
#ifdef HAVE_KWAYLAND
    if (auto *window = windowForId(id))
        window->requestClose();
#else
    Q_UNUSED(id)
#endif
}

void WaylandWindowInterface::forceActiveWindow(quint64 win)
{
#ifdef HAVE_KWAYLAND
    if (auto *window = windowForId(win))
        window->requestActivate();
#else
    Q_UNUSED(win)
#endif
}

QMap<QString, QVariant> WaylandWindowInterface::requestInfo(quint64 wid)
{
    QMap<QString, QVariant> result;
#ifdef HAVE_KWAYLAND
    KWayland::Client::PlasmaWindow *window = windowForId(wid);
    if (!window)
        return result;

    const QString appId = window->appId();
    // Same keys the X11 backend provides for ApplicationModel.
    result.insert("iconName", appId.toLower());
    result.insert("active", window->isActive());
    result.insert("visibleName", window->title());
    result.insert("id", appId);
#else
    Q_UNUSED(wid)
#endif
    return result;
}

QString WaylandWindowInterface::requestWindowClass(quint64 wid)
{
#ifdef HAVE_KWAYLAND
    if (auto *window = windowForId(wid))
        return window->appId();
#else
    Q_UNUSED(wid)
#endif
    return QString();
}

bool WaylandWindowInterface::isAcceptableWindow(quint64 wid)
{
#ifdef HAVE_KWAYLAND
    KWayland::Client::PlasmaWindow *window = windowForId(wid);
    if (!window)
        return false;

    if (window->skipTaskbar() || window->appId().isEmpty())
        return false;

    // Do not list the desktop's own panels/dock.
    const QString appId = window->appId();
    return !appId.contains(QLatin1String("lingmo-dock")) && !appId.contains(QLatin1String("lingmo-statusbar"));
#else
    Q_UNUSED(wid)
    return false;
#endif
}

QString WaylandWindowInterface::desktopFilePath(quint64 wid)
{
#ifdef HAVE_KWAYLAND
    KWayland::Client::PlasmaWindow *window = windowForId(wid);
    if (!window)
        return QString();

    return Utils::instance()->desktopPathFromMetadata(window->appId(), window->pid(), window->resourceName());
#else
    Q_UNUSED(wid)
    return QString();
#endif
}

void WaylandWindowInterface::setIconGeometry(quint64 wid, const QRect &rect)
{
    // plasma-window-management expresses this as setMinimizedGeometry() and
    // needs the panel's Surface; the dock does not own one, so nothing to do.
    Q_UNUSED(wid)
    Q_UNUSED(rect)
}
