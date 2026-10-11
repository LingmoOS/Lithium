import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import LingmoUI.CompatibleModule 3.0 as LingmoUI


LingmoUI.Window {
    id: control
    width: 900
    height: 600
    minimumWidth: 800
    minimumHeight: 500
    visible: false
    flags: Qt.FramelessWindowHint | Qt.WindowStaysOnTopHint

    background.color: LingmoUI.LingmoTheme.secondBackgroundColor
    background.opacity: 0.5
    contentTopMargin: 0

    onWidthChanged: control.reset()
    onHeightChanged: control.reset()

    function reset() {
        dot.visible = false
        popupItem.visible = false
    }

    onVisibleChanged: {
        if (!visible)
            control.reset()
    }

    Connections {
        target: timeZoneMap

        function onAvailableListChanged() {
            popupText.text = timeZoneMap.availableList[0]
            popupText.text = timeZoneMap.localeTimeZoneName(timeZoneMap.availableList[0])
            popupItem.visible = true
        }
    }

    LingmoUI.LingmoAcrylic {
        target: control
        targetRect: Qt.rect(control.x, control.y, control.width, control.height)
        cornerRadius: control.background.radius
        visible: true
    }

    Item {
        z: -1
        anchors.fill: parent

        DragHandler {
            acceptedDevices: PointerDevice.GenericPointer
            grabPermissions: PointerHandler.CanTakeOverFromItems | PointerHandler.CanTakeOverFromHandlersOfDifferentType | PointerHandler.ApprovesTakeOverByAnything
            onActiveChanged: if (active) control.helper.startSystemMove(control)
        }
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: LingmoUI.LingmoUnits.largeSpacing

        Image {
            id: _worldMap
            Layout.fillWidth: true
            Layout.fillHeight: true
            source: LingmoUI.LingmoTheme.darkMode ? "qrc:/images/dark/world.svg" : "qrc:/images/light/world.svg"
            sourceSize: Qt.size(width, height)
            fillMode: Image.PreserveAspectFit

            Rectangle {
                id: dot
                width: 20
                height: 20
                radius: height / 2
                color: LingmoUI.LingmoTheme.highlightColor
                z: 99
                visible: false
                border.width: 5
                border.color: Qt.rgba(LingmoUI.LingmoTheme.highlightColor.r,
                                      LingmoUI.LingmoTheme.highlightColor.g,
                                      LingmoUI.LingmoTheme.highlightColor.b, 0.5)

                function show(x, y) {
                    dot.x = x - dot.width / 2
                    dot.y = y - dot.height / 2
                    dot.visible = true
                }
            }

            Item {
                id: popupItem
                visible: popupText.text !== ""
                width: popupText.implicitWidth + LingmoUI.LingmoUnits.largeSpacing
                height: popupText.implicitHeight + LingmoUI.LingmoUnits.largeSpacing

                Rectangle {
                    anchors.fill: parent
                    radius: LingmoUI.LingmoTheme.smallRadius
                    color: LingmoUI.LingmoTheme.highlightColor
                }

                Label {
                    id: popupText
                    anchors.centerIn: parent
                    text: timeZoneMap.availableList[0] ? timeZoneMap.availableList[0] : ""
                    color: LingmoUI.LingmoTheme.highlightedTextColor
                }
            }

            MouseArea {
                anchors.fill: parent

                onClicked: {
                    timeZoneMap.clicked(mouse.x, mouse.y, _worldMap.width, _worldMap.height)
                    dot.show(mouse.x, mouse.y)

                    popupItem.x = mouse.x + LingmoUI.LingmoUnits.smallSpacing * 1.5
                    popupItem.y = mouse.y + LingmoUI.LingmoUnits.smallSpacing * 1.5

                    if (popupItem.x + popupItem.width >= _worldMap.width)
                        popupItem.x = _worldMap.width - popupItem.width - 2

                    if (popupItem.y + popupItem.height >= _worldMap.height)
                        popupItem.y = _worldMap.height - popupItem.height - 2

                    popupItem.visible = true
                }
            }
        }

        RowLayout {
            spacing: LingmoUI.LingmoUnits.largeSpacing

            Item {
                Layout.fillWidth: true
            }

            Button {
                text: qsTr("Cancel")
                onClicked: control.close()
            }

            Button {
                text: qsTr("Set")
                flat: true
                enabled: popupText.text
                onClicked: {
                    timeZoneMap.setTimeZone(timeZoneMap.availableList[0])
                    control.close()
                }
            }

            Item {
                Layout.fillWidth: true
            }
        }
    }
}
