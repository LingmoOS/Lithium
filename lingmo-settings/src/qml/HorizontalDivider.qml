import QtQuick 2.4
import QtQuick.Layouts 1.3
import LingmoUI.CompatibleModule 3.0 as LingmoUI


Item {
    id: control
    height: LingmoUI.LingmoUnits.largeSpacing * 2

    Layout.fillWidth: true

    Rectangle {
        anchors.centerIn: parent
        height: 1
        width: control.width
        color: LingmoUI.LingmoTheme.disabledTextColor
        opacity: LingmoUI.LingmoTheme.darkMode ? 0.3 : 0.1
    }
}
