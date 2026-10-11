import QtQuick 2.4
import QtQuick.Layouts 1.3
import LingmoUI as LingmoUI

Item {
    id: control
    height: LingmoUI.LingmoUnits.smallSpacing

    Layout.fillWidth: true

    Rectangle {
        anchors.centerIn: parent
        height: 10
        width: 1
        color: LingmoUI.LingmoTheme.disabledTextColor
        opacity: LingmoUI.LingmoTheme.darkMode ? 0.7 : 0.5
    }
}
