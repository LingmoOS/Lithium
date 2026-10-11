#ifndef LINGMOPLATFORM_H
#define LINGMOPLATFORM_H

#include <QObject>
#include <QQmlEngine>
#include <QWindow>

#include "singleton.h"

/**
 * @brief Small platform helper that hides the X11/Wayland split.
 *
 * The desktop keeps its X11 backends (EWMH window type Dock, extended struts,
 * KWindowEffects) and adds a Wayland path on top: panels, the dock and the
 * status bar become wlr-layer-shell surfaces there, reserving space with an
 * exclusive zone instead of _NET_WM_STRUT_PARTIAL.
 *
 * Callers keep their X11 code and guard it with isX11(); on Wayland they call
 * setupPanel()/setPanelExclusiveZone() instead.
 *
 * @since LingmoUI 3.0
 */
class LingmoPlatform : public QObject {
    Q_OBJECT
    QML_NAMED_ELEMENT(LingmoPlatform)
    QML_SINGLETON

private:
    explicit LingmoPlatform(QObject *parent = nullptr);

public:
    SINGLETON(LingmoPlatform)

    static auto create(QQmlEngine *, QJSEngine *) { return getInstance(); }

    /// True when running on a Wayland compositor.
    Q_INVOKABLE bool isWayland() const;

    /// True when running on X11/XCB (still fully supported).
    Q_INVOKABLE bool isX11() const;

    /**
     * Prepare @p window as a panel surface.
     *
     * Wayland: layer-shell surface on the panel layer, anchored to
     * @p anchors, reserving @p exclusiveZone pixels (0 = reserve nothing,
     * -1 = reserve everything, i.e. hide other windows).
     * X11: does nothing - the caller keeps its EWMH code.
     */
    Q_INVOKABLE void setupPanel(QWindow *window, Qt::Edges anchors,
                                int exclusiveZone = 0,
                                bool keyboardInteractivity = false);

    /// Update the space reserved by an already configured panel surface.
    Q_INVOKABLE void setPanelExclusiveZone(QWindow *window, int exclusiveZone);

    /// Switch keyboard focus handling of a panel surface.
    Q_INVOKABLE void setPanelKeyboardInteractivity(QWindow *window, bool enabled);
};

#endif // LINGMOPLATFORM_H
