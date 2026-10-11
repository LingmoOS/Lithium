import QtQuick 2.9
import QtQuick.Templates 2.2 as T
import LingmoUI.CompatibleModule 3.0 as LingmoUI

T.TabButton {
    id: control

    property int standardHeight: LingmoUI.LingmoUnits.iconSizes.medium + LingmoUI.LingmoUnits.smallSpacing
    property color pressedColor: Qt.rgba(LingmoUI.LingmoTheme.textColor.r, LingmoUI.LingmoTheme.textColor.g, LingmoUI.LingmoTheme.textColor.b, 0.5)

    implicitWidth: Math.max(background ? background.implicitWidth : 0,
                            contentItem.implicitWidth + leftPadding + rightPadding)
    implicitHeight: Math.max(background ? background.implicitHeight : 0,
                             standardHeight)
    baselineOffset: contentItem.y + contentItem.baselineOffset

    padding: 0
    spacing: 0

    contentItem: Text {
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight

        text: control.text
        font: control.font
        color: !control.enabled ? LingmoUI.LingmoTheme.disabledTextColor : control.pressed ? pressedColor : control.checked ? LingmoUI.LingmoTheme.textColor : LingmoUI.LingmoTheme.textColor
    }
}
