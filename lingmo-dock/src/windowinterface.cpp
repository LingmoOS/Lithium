#include "windowinterface.h"

#include "waylandwindowinterface.h"
#include "xwindowinterface.h"

#include <LingmoPlatform.h>

WindowInterface *WindowInterface::instance()
{
    static WindowInterface s_instance;
    return &s_instance;
}

WindowInterface::WindowInterface(QObject *parent)
    : QObject(parent)
{
    if (LingmoPlatform::getInstance()->isWayland()) {
        m_wayland = new WaylandWindowInterface(this);
        connect(m_wayland, &WaylandWindowInterface::windowAdded, this, &WindowInterface::windowAdded);
        connect(m_wayland, &WaylandWindowInterface::windowRemoved, this, &WindowInterface::windowRemoved);
        connect(m_wayland, &WaylandWindowInterface::activeChanged, this, &WindowInterface::activeChanged);
    } else {
        m_x11 = XWindowInterface::instance();
        connect(m_x11, &XWindowInterface::windowAdded, this, &WindowInterface::windowAdded);
        connect(m_x11, &XWindowInterface::windowRemoved, this, &WindowInterface::windowRemoved);
        connect(m_x11, &XWindowInterface::activeChanged, this, &WindowInterface::activeChanged);
    }
}

bool WindowInterface::isWayland() const
{
    return m_wayland != nullptr;
}

void WindowInterface::enableBlurBehind(QWindow *view, bool enable, const QRegion &region)
{
    if (m_x11)
        m_x11->enableBlurBehind(view, enable, region);
}

quint64 WindowInterface::activeWindow()
{
    if (m_wayland)
        return m_wayland->activeWindow();

    return m_x11 ? m_x11->activeWindow() : 0;
}

void WindowInterface::minimizeWindow(quint64 win)
{
    if (m_wayland)
        m_wayland->minimizeWindow(win);
    else if (m_x11)
        m_x11->minimizeWindow(win);
}

void WindowInterface::closeWindow(quint64 id)
{
    if (m_wayland)
        m_wayland->closeWindow(id);
    else if (m_x11)
        m_x11->closeWindow(id);
}

void WindowInterface::forceActiveWindow(quint64 win)
{
    if (m_wayland)
        m_wayland->forceActiveWindow(win);
    else if (m_x11)
        m_x11->forceActiveWindow(win);
}

QMap<QString, QVariant> WindowInterface::requestInfo(quint64 wid)
{
    if (m_wayland)
        return m_wayland->requestInfo(wid);

    return m_x11 ? m_x11->requestInfo(wid) : QMap<QString, QVariant>();
}

QString WindowInterface::requestWindowClass(quint64 wid)
{
    if (m_wayland)
        return m_wayland->requestWindowClass(wid);

    return m_x11 ? m_x11->requestWindowClass(wid) : QString();
}

bool WindowInterface::isAcceptableWindow(quint64 wid)
{
    if (m_wayland)
        return m_wayland->isAcceptableWindow(wid);

    return m_x11 ? m_x11->isAcceptableWindow(wid) : false;
}

void WindowInterface::setViewStruts(QWindow *view, DockSettings::Direction direction, const QRect &rect, bool compositing)
{
    if (m_x11)
        m_x11->setViewStruts(view, direction, rect, compositing);
}

void WindowInterface::clearViewStruts(QWindow *view)
{
    if (m_x11)
        m_x11->clearViewStruts(view);
}

void WindowInterface::startInitWindows()
{
    if (m_wayland)
        m_wayland->startInitWindows();
    else if (m_x11)
        m_x11->startInitWindows();
}

QString WindowInterface::desktopFilePath(quint64 wid)
{
    if (m_wayland)
        return m_wayland->desktopFilePath(wid);

    return m_x11 ? m_x11->desktopFilePath(wid) : QString();
}

void WindowInterface::setIconGeometry(quint64 wid, const QRect &rect)
{
    if (m_wayland)
        m_wayland->setIconGeometry(wid, rect);
    else if (m_x11)
        m_x11->setIconGeometry(wid, rect);
}
