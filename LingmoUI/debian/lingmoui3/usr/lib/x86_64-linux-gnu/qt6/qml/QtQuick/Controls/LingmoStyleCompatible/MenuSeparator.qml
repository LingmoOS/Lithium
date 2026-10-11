import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Templates 2.12 as T
import LingmoUI.CompatibleModule 3.0 as LingmoUI

T.MenuSeparator {
    id: control

    implicitHeight: LingmoUI.LingmoUnits.largeSpacing + separator.height
    width: parent.width

    background: Rectangle {
        id: separator
        anchors.centerIn: control
        width: control.width - LingmoUI.LingmoUnits.largeSpacing * 2
        height: 1
        color: LingmoUI.LingmoTheme.textColor
        opacity: 0.3
    }
}
