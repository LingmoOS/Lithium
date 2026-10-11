#ifndef WINDOWINTERFACE_H
#define WINDOWINTERFACE_H

#include <QMap>
#include <QObject>
#include <QRect>
#include <QRegion>
#include <QVariant>
#include <QWindow>

#include "applicationitem.h"
#include "docksettings.h"

class XWindowInterface;
class WaylandWindowInterface;

/**
 * @brief Backend-agnostic window list and window control for the dock.
 *
 * X11: forwards to XWindowInterface (EWMH/_NET_CLIENT_LIST), unchanged.
 * Wayland: forwards to WaylandWindowInterface, which uses KWin's
 * plasma-window-management protocol (KWayland) - window ids are opaque
 * handles in both cases.
 */
class WindowInterface : public QObject
{
    Q_OBJECT

public:
    static WindowInterface *instance();
    explicit WindowInterface(QObject *parent = nullptr);

    void enableBlurBehind(QWindow *view, bool enable = true, const QRegion &region = QRegion());

    quint64 activeWindow();
    void minimizeWindow(quint64 win);
    void closeWindow(quint64 id);
    void forceActiveWindow(quint64 win);

    QMap<QString, QVariant> requestInfo(quint64 wid);
    QString requestWindowClass(quint64 wid);
    bool isAcceptableWindow(quint64 wid);

    void setViewStruts(QWindow *view, DockSettings::Direction direction, const QRect &rect, bool compositing = false);
    void clearViewStruts(QWindow *view);

    void startInitWindows();

    QString desktopFilePath(quint64 wid);

    void setIconGeometry(quint64 wid, const QRect &rect);

    bool isWayland() const;

signals:
    void windowAdded(quint64 wid);
    void windowRemoved(quint64 wid);
    void activeChanged(quint64 wid);

private:
    XWindowInterface *m_x11 = nullptr;
    WaylandWindowInterface *m_wayland = nullptr;
};

#endif // WINDOWINTERFACE_H
