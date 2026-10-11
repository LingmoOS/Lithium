import QtQuick 2.12
import QtQuick.Templates 2.12 as T
import QtQuick.Controls 2.12
import QtQuick.Controls.impl 2.12

import LingmoUI.CompatibleModule 3.0 as LingmoUI

T.MenuItem
{
    id: control

    property color hoveredColor: LingmoUI.LingmoTheme.darkMode ? Qt.rgba(255, 255, 255, 0.2)
                                                       : Qt.rgba(0, 0, 0, 0.1)
    property color pressedColor: LingmoUI.LingmoTheme.darkMode ? Qt.rgba(255, 255, 255, 0.1)
                                                       : Qt.rgba(0, 0, 0, 0.2)

    implicitWidth: Math.max(implicitBackgroundWidth + leftInset + rightInset,
                            implicitContentWidth + leftPadding + rightPadding)
    implicitHeight: Math.max(implicitBackgroundHeight + topInset + bottomInset,
                             implicitContentHeight + topPadding + bottomPadding,
                             implicitIndicatorHeight + topPadding + bottomPadding)

    verticalPadding: LingmoUI.LingmoUnits.smallSpacing
    hoverEnabled: true
    topPadding: LingmoUI.LingmoUnits.smallSpacing
    bottomPadding: LingmoUI.LingmoUnits.smallSpacing

    icon.width: LingmoUI.LingmoUnits.iconSizes.medium
    icon.height: LingmoUI.LingmoUnits.iconSizes.medium

    icon.color: control.enabled ? (control.highlighted ? control.LingmoUI.LingmoTheme.highlightColor : control.LingmoUI.LingmoTheme.textColor) :
                             control.LingmoUI.LingmoTheme.disabledTextColor

    contentItem: IconLabel {
        readonly property real arrowPadding: control.subMenu && control.arrow ? control.arrow.width + control.spacing : 0
        readonly property real indicatorPadding: control.checkable && control.indicator ? control.indicator.width + control.spacing : 0
        leftPadding: !control.mirrored ? indicatorPadding + LingmoUI.LingmoUnits.smallSpacing * 2 : arrowPadding
        rightPadding: control.mirrored ? indicatorPadding : arrowPadding + LingmoUI.LingmoUnits.smallSpacing * 2

        spacing: control.spacing
        mirrored: control.mirrored
        display: control.display
        alignment: Qt.AlignLeft

        icon: control.icon
        text: control.text
        font: control.font
        color: control.enabled ? control.pressed || control.hovered ? control.LingmoUI.LingmoTheme.textColor : 
               LingmoUI.LingmoTheme.textColor : control.LingmoUI.LingmoTheme.disabledTextColor
    }

    background: Rectangle {
        implicitWidth: 200
        implicitHeight: control.visible ? LingmoUI.LingmoUnits.gridUnit + LingmoUI.LingmoUnits.largeSpacing : 0
        radius: LingmoUI.LingmoTheme.mediumRadius
        opacity: 1

        anchors {
            fill: parent
            leftMargin: LingmoUI.LingmoUnits.smallSpacing
            rightMargin: LingmoUI.LingmoUnits.smallSpacing
        }

        color: control.pressed || highlighted ? control.pressedColor : control.hovered ? control.hoveredColor : "transparent"
    }
}
