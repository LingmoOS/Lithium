import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import Qt5Compat.GraphicalEffects

import Lingmo.Dock 1.0
import LingmoUI.CompatibleModule 3.0 as LingmoUI

Item {
    id: root
    visible: true

    property bool isHorizontal: Settings.direction === DockSettings.Bottom
    property real windowRadius: isHorizontal ? root.height * 0.3 : root.width * 0.3
    property bool compositing: true

    onCompositingChanged: {
        mainWindow.updateSize()
    }

    DropArea {
        anchors.fill: parent
        enabled: true
    }

    // Background
    Rectangle {
        id: _background

        property var borderColor: LingmoUI.LingmoTheme.darkMode ? Qt.rgba(255, 255, 255, 0.3) : Qt.rgba(255, 255, 255, 0.15)

        anchors.fill: parent
        radius: true && Settings.style === 0 ? windowRadius : 0
        // color: LingmoUI.LingmoTheme.darkMode ? "#333333" : "#F2F2F2"
        // opacity: LingmoUI.LingmoTheme.darkMode ? 0.5 : 0.4
        opacity: LingmoUI.LingmoTheme.darkMode ? 0.5
        color: LingmoUI.LingmoTheme.darkMode ? "#666666" : "#E6E6E6"
        // opacity: LingmoUI.LingmoTheme.darkMode ? 0.5
        // opacity: 0.8
        border.width: 1 / LingmoUI.LingmoUnits.devicePixelRatio
        border.pixelAligned: LingmoUI.LingmoUnits.devicePixelRatio > 1 ? false : true
        border.color: borderColor

        Behavior on color {
            ColorAnimation {
                duration: 200
                easing.type: Easing.Linear
            }
        }
    }


    LingmoUI.LingmoShadow {
        radius: _background.radius
    }

    LingmoUI.LingmoAcrylic {
        target: mainWindow
        targetRect: Qt.rect(root.x, root.y, root.width, root.height)
        cornerRadius: _background.radius
        visible: true
    }

    LingmoUI.PopupTips {
        id: popupTips
        backgroundColor: _background.color
        blurEnabled: false
    }

    GridLayout {
        id: mainLayout
        anchors.fill: parent
        anchors.topMargin: Settings.style === 1
                           && (Settings.direction === 0 || Settings.direction === 2)
                           ? 28 : 0
        flow: isHorizontal ? Grid.LeftToRight : Grid.TopToBottom
        columnSpacing: 0
        rowSpacing: 0

        ListView {
            id: appItemView
            orientation: isHorizontal ? Qt.Horizontal : Qt.Vertical
            snapMode: ListView.SnapToItem
            interactive: false
            model: appModel
            clip: true

            Layout.fillHeight: true
            Layout.fillWidth: true

            delegate: AppItem {
                id: appItemDelegate
                implicitWidth: isHorizontal ? appItemView.height : appItemView.width
                implicitHeight: isHorizontal ? appItemView.height : appItemView.width
            }

            moveDisplaced: Transition {
                NumberAnimation {
                    properties: "x, y"
                    duration: 300
                    easing.type: Easing.InOutQuad
                }
            }
        }

        DockItem {
            id: trashItem
            implicitWidth: isHorizontal ? root.height : root.width
            implicitHeight: isHorizontal ? root.height : root.width
            popupText: qsTr("Trash")
            enableActivateDot: false
            iconName: trash.count === 0 ? "user-trash" : "user-trash-full"
            onClicked: trash.openTrash()
            onRightClicked: trashMenu.popup()

            dropArea.enabled: true

            onDropped: {
                if (drop.hasUrls) {
                    trash.moveToTrash(drop.urls)
                }
            }

            Rectangle {
                anchors.fill: parent
                anchors.margins: LingmoUI.LingmoUnits.smallSpacing / 2
                color: "transparent"
                border.color: LingmoUI.LingmoTheme.textColor
                radius: height * 0.3
                border.width: 1 / LingmoUI.LingmoUnits.devicePixelRatio
                border.pixelAligned: LingmoUI.LingmoUnits.devicePixelRatio > 1 ? false : true
                opacity: trashItem.dropArea.containsDrag ? 0.5 : 0

                Behavior on opacity {
                    NumberAnimation {
                        duration: 200
                    }
                }
            }

            LingmoUI.DesktopMenu {
                id: trashMenu

                MenuItem {
                    text: qsTr("Open")
                    onTriggered: trash.openTrash()
                }

                MenuItem {
                    text: qsTr("Empty Trash")
                    onTriggered: trash.emptyTrash()
                    // visible: trash.count !== 0
                }
            }
        }
    }

    Connections {
        target: Settings

        function onDirectionChanged() {
            popupTips.hide()
        }
    }

    Connections {
        target: mainWindow

        function onVisibleChanged() {
            popupTips.hide()
        }
    }
}
