import QtQuick 2.12
import QtQuick.Templates 2.12 as T
import LingmoUI.GraphicalEffects
import LingmoUI 3.0 as LingmoUI
import QtQuick.Controls.impl 2.12

T.Button {
    id: control
    implicitWidth: Math.max(background.implicitWidth, contentItem.implicitWidth + LingmoUI.LingmoUnits.largeSpacing)
    implicitHeight: background.implicitHeight
    hoverEnabled: true

    icon.width: LingmoUI.LingmoUnits.iconSizes.small
    icon.height: LingmoUI.LingmoUnits.iconSizes.small

    icon.color: control.enabled ? (control.highlighted ? control.LingmoUI.LingmoTheme.highlightColor : control.LingmoUI.LingmoTheme.textColor) : control.LingmoUI.LingmoTheme.disabledTextColor
    spacing: LingmoUI.LingmoUnits.smallSpacing

    property color defaultColor: "#0A84FF"  // 起始颜色
    // property color hoveredColor: "#0AaAFF"   // 终止颜色
    // property color pressedColor: "#0581F0"

    property color hoveredColor: LingmoUI.LingmoTheme.darkMode ? Qt.lighter(LingmoUI.LingmoTheme.alternateBackgroundColor, 1.2)
                                                       : Qt.darker(LingmoUI.LingmoTheme.alternateBackgroundColor, 1.1)

    property color pressedColor: LingmoUI.LingmoTheme.darkMode ? Qt.lighter(LingmoUI.LingmoTheme.alternateBackgroundColor, 1.1)
                                                       : Qt.darker(LingmoUI.LingmoTheme.alternateBackgroundColor, 1.2)

    property color borderColor: Qt.rgba(LingmoUI.LingmoTheme.highlightColor.r,
                                        LingmoUI.LingmoTheme.highlightColor.g,
                                        LingmoUI.LingmoTheme.highlightColor.b, 0.5)

    property color flatHoveredColor: Qt.rgba(LingmoUI.LingmoTheme.highlightColor.r,
                                             LingmoUI.LingmoTheme.highlightColor.g,
                                             LingmoUI.LingmoTheme.highlightColor.b, 0.2)
    property color flatPressedColor: Qt.rgba(LingmoUI.LingmoTheme.highlightColor.r,
                                             LingmoUI.LingmoTheme.highlightColor.g,
                                             LingmoUI.LingmoTheme.highlightColor.b, 0.25)

    contentItem: IconLabel {
        text: control.text
        font: control.font
        icon: control.icon
        color: !control.enabled ? control.LingmoUI.LingmoTheme.disabledTextColor : control.flat ? LingmoUI.LingmoTheme.highlightColor : LingmoUI.LingmoTheme.textColor
        spacing: control.spacing
        mirrored: control.mirrored
        display: control.display
        alignment: Qt.AlignCenter
    }

    background: Item {
        implicitWidth: (LingmoUI.LingmoUnits.iconSizes.medium * 3) + LingmoUI.LingmoUnits.largeSpacing
        implicitHeight: LingmoUI.LingmoUnits.iconSizes.medium + LingmoUI.LingmoUnits.smallSpacing

        Rectangle {
            id: _flatBackground
            anchors.fill: parent
            radius: LingmoUI.LingmoTheme.hugeRadius
            border.width: 1
            border.color: control.enabled ? control.activeFocus ? LingmoUI.LingmoTheme.highlightColor : "transparent"
                                          : "transparent"
            visible: control.flat

            color: {
                if (!control.enabled)
                    return LingmoUI.LingmoTheme.alternateBackgroundColor

                if (control.pressed)
                    return control.flatPressedColor

                if (control.hovered)
                    return control.flatHoveredColor

                return Qt.rgba(LingmoUI.LingmoTheme.highlightColor.r,
                               LingmoUI.LingmoTheme.highlightColor.g,
                               LingmoUI.LingmoTheme.highlightColor.b, 0.1)
            }

            Behavior on color {
                ColorAnimation {
                    duration: 200
                    easing.type: Easing.Linear
                }
            }
        }

        Rectangle {
            id: _background
            anchors.fill: parent
            radius: LingmoUI.LingmoTheme.hugeRadius
            border.width: 1
            visible: !control.flat
            border.color: control.enabled ? control.activeFocus ? LingmoUI.LingmoTheme.highlightColor : "transparent"
                                          : "transparent"

            color: {
                if (!control.enabled)
                    return LingmoUI.LingmoTheme.alternateBackgroundColor

                if (control.pressed)
                    return control.pressedColor

                if (control.hovered)
                    return control.hoveredColor

                return LingmoUI.LingmoTheme.alternateBackgroundColor
            }
            Behavior on color {
                ColorAnimation {
                    duration: 200
                    easing.type: Easing.Linear
                }
            }
            Behavior on border.color {
                ColorAnimation {
                    duration: 200
                    easing.type: Easing.Linear
                }
            }
        }
    }
}
