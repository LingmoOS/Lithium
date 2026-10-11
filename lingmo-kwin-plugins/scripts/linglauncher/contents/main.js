// Force the lingmo-launcher window to cover the screen area it is shown on.
//
// KWin 6 scripting API: workspace.windowList()/windowAdded (was clientList/
// clientAdded), window.output (an Output object, was client.screen as an
// index), window.frameGeometry/frameGeometryChanged (was geometry/
// geometryChanged), and clientArea() takes that Output.

function forceFullScreen(window) {
    var output = window.output;
    var area = workspace.clientArea(KWin.ScreenArea, output, workspace.currentDesktop);
    window.frameGeometry = area;
}

function setupConnection(window) {
    if (window.resourceClass != "lingmo-launcher"
            || window.resourceName != "lingmo-launcher" || window.dialog) {
        return;
    }

    forceFullScreen(window);
    window.frameGeometryChanged.connect(window, function () {
        forceFullScreen(this);
    });
}

workspace.windowAdded.connect(setupConnection);

// Connect windows that already exist.
var windows = workspace.windowList();
for (var i = 0; i < windows.length; i++) {
    setupConnection(windows[i]);
}
