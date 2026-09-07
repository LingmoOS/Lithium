import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import Lingmo.Calculator
import Qt.labs.platform
import LingmoUI.CompatibleModule 3.0 as LingmoUI

LingmoUI.Window {
    id: rootWindow
    width: 350
    height: 550
    minimumWidth: 350
    minimumHeight: 550
    title: qsTr("Calculator")

    background.color: LingmoUI.Theme.darkMode ? Qt.rgba(46 / 255, 46 / 255, 46 / 255, 1.0)
                                            : Qt.rgba(240 / 255, 238 / 255, 241 / 255, 1.0)
    background.opacity: rootWindow.compositing ? 0.95 : 1.0

    MenuBar {
        id: menuBar

        Menu {
            id: helpMenu
            title: qsTr("Help")

            MenuItem {
                text: qsTr("About")
                onTriggered: aboutDialog.show()
            }
        }
    }

    LingmoUI.AboutDialog {
        id: aboutDialog
        name: rootWindow.title
        description: qsTr("A simple calculator")
        iconSource: "image://icontheme/lingmo-calculator"
    }

    LingmoUI.WindowBlur {
        view: rootWindow
        geometry: Qt.rect(rootWindow.x, rootWindow.y, rootWindow.width, rootWindow.height)
        windowRadius: rootWindow.background.radius
        enabled: true
    }

    CalcEngine {
        id: calcEngine

        Component.onCompleted: {
            console.log("load calc engine finished")
        }
    }

    ColumnLayout {
        anchors.fill: parent
        spacing: LingmoUI.Units.smallSpacing

        Zone {
            id: zone
            Layout.fillWidth: true
            Layout.preferredHeight: parent.height * 0.35
        }

        StandardPad {
            Layout.fillWidth: true
            Layout.fillHeight: true

            Rectangle {
                z: -1
                anchors.fill: parent
                color: LingmoUI.Theme.secondBackgroundColor
                opacity: 0.9
            }

            onPressed: function(text){zone.appendToTextField(text);}
        }
    }

    function calculate(evalText) {
        var res = calcEngine.eval(evalText)
        return res
    }
}
