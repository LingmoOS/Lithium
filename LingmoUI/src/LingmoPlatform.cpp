#include "LingmoPlatform.h"

#include <QGuiApplication>

#ifdef HAVE_LAYERSHELLQT
#include <LayerShellQt/Window>
#include <LayerShellQt/shell.h>
#endif

LingmoPlatform::LingmoPlatform(QObject *parent)
    : QObject(parent)
{
}

bool LingmoPlatform::isWayland() const
{
    return QGuiApplication::platformName().startsWith(QLatin1String("wayland"),
                                                      Qt::CaseInsensitive);
}

bool LingmoPlatform::isX11() const
{
    const QString platform = QGuiApplication::platformName();
    return platform.startsWith(QLatin1String("xcb"), Qt::CaseInsensitive)
        || platform.startsWith(QLatin1String("x11"), Qt::CaseInsensitive);
}

void LingmoPlatform::setupPanel(QWindow *window, Qt::Edges anchors,
                                int exclusiveZone, bool keyboardInteractivity)
{
#ifdef HAVE_LAYERSHELLQT
    if (!window || !isWayland())
        return;

    LayerShellQt::Window *layerShell = LayerShellQt::Window::get(window);

    // Panel surfaces never cover the whole screen and must not grab focus by
    // default; the compositor keeps them out of the window list for us.
    layerShell->setLayer(LayerShellQt::Window::LayerTop);
    layerShell->setAnchors(LayerShellQt::Window::Anchors(int(anchors)));
    layerShell->setExclusiveZone(exclusiveZone);
    layerShell->setKeyboardInteractivity(
        keyboardInteractivity ? LayerShellQt::Window::KeyboardInteractivityOnDemand
                              : LayerShellQt::Window::KeyboardInteractivityNone);
    layerShell->setScope(QStringLiteral("lingmo-panel"));
#else
    Q_UNUSED(window)
    Q_UNUSED(anchors)
    Q_UNUSED(exclusiveZone)
    Q_UNUSED(keyboardInteractivity)
#endif
}

void LingmoPlatform::setPanelExclusiveZone(QWindow *window, int exclusiveZone)
{
#ifdef HAVE_LAYERSHELLQT
    if (!window || !isWayland())
        return;

    LayerShellQt::Window::get(window)->setExclusiveZone(exclusiveZone);
#else
    Q_UNUSED(window)
    Q_UNUSED(exclusiveZone)
#endif
}

void LingmoPlatform::setPanelKeyboardInteractivity(QWindow *window, bool enabled)
{
#ifdef HAVE_LAYERSHELLQT
    if (!window || !isWayland())
        return;

    LayerShellQt::Window::get(window)->setKeyboardInteractivity(
        enabled ? LayerShellQt::Window::KeyboardInteractivityOnDemand
                : LayerShellQt::Window::KeyboardInteractivityNone);
#else
    Q_UNUSED(window)
    Q_UNUSED(enabled)
#endif
}
