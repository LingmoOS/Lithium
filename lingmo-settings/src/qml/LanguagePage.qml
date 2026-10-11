import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import Qt5Compat.GraphicalEffects


import LingmoUI.CompatibleModule 3.0 as LingmoUI

import Lingmo.Settings 1.0 as Settings

ItemPage {
    headerTitle: qsTr("Language")

    Settings.Language {
        id: language
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.topMargin: LingmoUI.LingmoUnits.smallSpacing

        ListView {
            id: listView

            LingmoUI.WheelHandler {
                target: listView
            }

            Layout.fillWidth: true
            Layout.fillHeight: true

            model: language.languages
            clip: true

            topMargin: LingmoUI.LingmoUnits.largeSpacing
            leftMargin: LingmoUI.LingmoUnits.largeSpacing * 2
            rightMargin: LingmoUI.LingmoUnits.largeSpacing * 2
            bottomMargin: LingmoUI.LingmoUnits.largeSpacing
            spacing: LingmoUI.LingmoUnits.largeSpacing

            currentIndex: language.currentLanguage

            ScrollBar.vertical: ScrollBar {
                bottomPadding: LingmoUI.LingmoTheme.smallRadius
            }

            highlightFollowsCurrentItem: true
            highlightMoveDuration: 0
            highlightResizeDuration : 0
            highlight: Rectangle {
                color: LingmoUI.LingmoTheme.highlightColor
                radius: LingmoUI.LingmoTheme.smallRadius
            }

            delegate: MouseArea {
                property bool isSelected: index == listView.currentIndex

                id: item
                width: ListView.view.width - ListView.view.leftMargin - ListView.view.rightMargin
                height: 36
                hoverEnabled: true
                acceptedButtons: Qt.LeftButton

                onClicked: {
                    language.setCurrentLanguage(index)
                }

                Rectangle {
                    anchors.fill: parent
                    color: isSelected ? "transparent" : item.containsMouse ? LingmoUI.LingmoTheme.disabledTextColor : "transparent"
                    opacity: isSelected ? 1 : 0.1
                    radius: LingmoUI.LingmoTheme.smallRadius
                }

                RowLayout {
                    anchors.fill: parent
                    anchors.leftMargin: LingmoUI.LingmoUnits.smallSpacing
                    anchors.rightMargin: LingmoUI.LingmoUnits.largeSpacing

                    Label {
                        color: isSelected ? LingmoUI.LingmoTheme.highlightedTextColor : LingmoUI.LingmoTheme.textColor
                        text: modelData
                        Layout.alignment: Qt.AlignVCenter
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Image {
                        width: item.height * 0.45
                        height: width
                        sourceSize: Qt.size(width, height)
                        source: "qrc:/images/dark/checked.svg"
                        visible: isSelected
                        smooth: false
                    }
                }
            }
        }
    }
}
