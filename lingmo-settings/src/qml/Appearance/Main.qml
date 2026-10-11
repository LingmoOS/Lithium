import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import Qt5Compat.GraphicalEffects


import Lingmo.Settings 1.0
import LingmoUI.CompatibleModule 3.0 as LingmoUI

import "../"

ItemPage {
    headerTitle: qsTr("Appearance")

    Appearance {
        id: appearance
    }

    FontsModel {
        id: fontsModel
    }

    Fonts {
        id: fonts
    }

    Connections {
        target: fontsModel

        function onLoadFinished() {
            for (var i in fontsModel.generalFonts) {
                if (fontsModel.systemGeneralFont === fontsModel.generalFonts[i]) {
                    generalFontComboBox.currentIndex = i
                    break;
                }
            }

            for (i in fontsModel.fixedFonts) {
                if (fontsModel.systemFixedFont === fontsModel.fixedFonts[i]) {
                    fixedFontComboBox.currentIndex = i
                    break;
                }
            }

            console.log("fonts load finished")
        }
    }

    Scrollable {
        anchors.fill: parent
        contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent
            // anchors.bottomMargin: LingmoUI.LingmoUnits.largeSpacing
            spacing: LingmoUI.LingmoUnits.largeSpacing * 2

            RoundedItem {
                Label {
                    text: qsTr("Theme")
                    color: LingmoUI.LingmoTheme.disabledTextColor
                }

                // Light Mode and Dark Mode
                RowLayout {
                    spacing: LingmoUI.LingmoUnits.largeSpacing * 2

                    IconCheckBox {
                        source: "qrc:/images/light_mode.svg"
                        text: qsTr("Light")
                        checked: !LingmoUI.LingmoTheme.darkMode
                        onClicked: appearance.switchDarkMode(false)
                    }

                    IconCheckBox {
                        source: "qrc:/images/dark_mode.svg"
                        text: qsTr("Dark")
                        checked: LingmoUI.LingmoTheme.darkMode
                        onClicked: appearance.switchDarkMode(true)
                    }
                }

                HorizontalDivider {}

                RowLayout {
                    spacing: LingmoUI.LingmoUnits.largeSpacing

                    Label {
                        id: dimsTipsLabel
                        text: qsTr("Dim the wallpaper in dark theme")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        checked: appearance.dimsWallpaper
                        height: dimsTipsLabel.height
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignRight
                        onCheckedChanged: appearance.setDimsWallpaper(checked)
                        rightPadding: 0
                    }
                }

                RowLayout {
                    Label {
                        text: qsTr("System effects")
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        checked: appearance.systemEffects
                        Layout.fillHeight: true
                        Layout.alignment: Qt.AlignVCenter | Qt.AlignRight
                        onCheckedChanged: appearance.systemEffects = checked
                        rightPadding: 0
                    }
                }
            }

            RoundedItem {
                RowLayout {
                    spacing: LingmoUI.LingmoUnits.largeSpacing * 2

                    Label {
                        text: qsTr("Minimize animation")
                    }

                    TabBar {
                        Layout.fillWidth: true
                        currentIndex: appearance.minimiumAnimation
                        onCurrentIndexChanged: appearance.minimiumAnimation = currentIndex

                        TabButton {
                            text: qsTr("Default")
                        }

                        TabButton {
                            text: qsTr("Magic Lamp")
                        }
                    }
                }
            }

            RoundedItem {
                Label {
                    text: qsTr("Accent color")
                    color: LingmoUI.LingmoTheme.disabledTextColor
                }

                GridView {
                    id: accentColorView
                    height: itemSize
                    Layout.fillWidth: true
                    cellWidth: height
                    cellHeight: height
                    interactive: false
                    model: ListModel {}

                    property var itemSize: 30 + LingmoUI.LingmoUnits.largeSpacing * 2

                    Component.onCompleted: {
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.blueColor)})
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.redColor)})
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.greenColor)})
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.purpleColor)})
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.pinkColor)})
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.orangeColor)})
                        model.append({"accentColor": String(LingmoUI.LingmoTheme.greyColor)})
                    }

                    delegate: Item {
                        id: _accentColorItem

                        property bool checked: Qt.colorEqual(LingmoUI.LingmoTheme.highlightColor, accentColor)
                        property color currentColor: accentColor

                        width: GridView.view.itemSize
                        height: width

                        MouseArea {
                            id: _mouseArea
                            anchors.fill: parent
                            hoverEnabled: true
                            onClicked: appearance.setAccentColor(index)
                        }

                        Rectangle {
                            anchors.fill: parent
                            anchors.margins: LingmoUI.LingmoUnits.smallSpacing
                            color: "transparent"
                            radius: width / 2

                            border.color: _mouseArea.pressed ? Qt.rgba(currentColor.r,
                                                                       currentColor.g,
                                                                       currentColor.b, 0.6)
                                                             : Qt.rgba(currentColor.r,
                                                                       currentColor.g,
                                                                       currentColor.b, 0.4)
                            border.width: checked || _mouseArea.containsMouse ? 3 : 0

                            Rectangle {
                                anchors.fill: parent
                                anchors.margins: LingmoUI.LingmoUnits.smallSpacing
                                color: currentColor
                                radius: width / 2

                                Image {
                                    anchors.centerIn: parent
                                    width: parent.height * 0.6
                                    height: width
                                    sourceSize: Qt.size(width, height)
                                    source: "qrc:/images/dark/checked.svg"
                                    visible: checked
                                }
                            }
                        }
                    }
                }
            }
            RoundedItem {
                Label {
                    text: qsTr("Fonts")
                    color: LingmoUI.LingmoTheme.disabledTextColor
                }
                GridLayout {
                    rows: 3
                    columns: 2

                    columnSpacing: LingmoUI.LingmoUnits.largeSpacing * 1.5
                    rowSpacing: LingmoUI.LingmoUnits.largeSpacing * 1.5

                    Label {
                        text: qsTr("General Font")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                    }

                    ComboBox {
                        id: generalFontComboBox
                        model: fontsModel.generalFonts
                        enabled: true
                        Layout.fillWidth: true
                        topInset: 0
                        bottomInset: 0
                        leftPadding: LingmoUI.LingmoUnits.largeSpacing
                        rightPadding: LingmoUI.LingmoUnits.largeSpacing
                        onActivated: appearance.setGenericFontFamily(currentText)
                    }

                    Label {
                        text: qsTr("Fixed Font")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                    }

                    ComboBox {
                        id: fixedFontComboBox
                        model: fontsModel.fixedFonts
                        enabled: true
                        Layout.fillWidth: true
                        topInset: 0
                        bottomInset: 0
                        leftPadding: LingmoUI.LingmoUnits.largeSpacing
                        rightPadding: LingmoUI.LingmoUnits.largeSpacing
                        onActivated: appearance.setFixedFontFamily(currentText)
                    }

                    Label {
                        text: qsTr("Font Size")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                    }

                    TabBar {
                        Layout.fillWidth: true

                        TabButton {
                            text: qsTr("Small")
                        }

                        TabButton {
                            text: qsTr("Medium")
                        }

                        TabButton {
                            text: qsTr("Large")
                        }

                        TabButton {
                            text: qsTr("Huge")
                        }

                        currentIndex: {
                            var index = 0

                            if (appearance.fontPointSize <= 9)
                                index = 0
                            else if (appearance.fontPointSize <= 10)
                                index = 1
                            else if (appearance.fontPointSize <= 12)
                                index = 2
                            else if (appearance.fontPointSize <= 15)
                                index = 3

                            return index
                        }

                        onCurrentIndexChanged: {
                            var fontSize = 0

                            switch (currentIndex) {
                            case 0:
                                fontSize = 9
                                break;
                            case 1:
                                fontSize = 10
                                break;
                            case 2:
                                fontSize = 12
                                break;
                            case 3:
                                fontSize = 15
                                break;
                            }

                            appearance.setFontPointSize(fontSize)
                        }
                    }

                    Label {
                        text: qsTr("Hinting")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                    }

                    ComboBox {
                        model: fonts.hintingModel
                        textRole: "display"
                        Layout.fillWidth: true
                        currentIndex: fonts.hintingCurrentIndex
                        onCurrentIndexChanged: fonts.hintingCurrentIndex = currentIndex
                    }

                    Label {
                        text: qsTr("Anti-Aliasing")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                    }

                    Switch {
                        Layout.fillHeight: true
                        Layout.alignment: Qt.AlignRight
                        checked: fonts.antiAliasing
                        onCheckedChanged: fonts.antiAliasing = checked
                    }

                }
            }
            RoundedItem {
                Label {
                    text: qsTr("Desktop Settings")
                    color: LingmoUI.LingmoTheme.disabledTextColor
                }
                GridLayout {
                    rows: 3
                    columns: 2

                    columnSpacing: LingmoUI.LingmoUnits.largeSpacing * 1.5
                    rowSpacing: LingmoUI.LingmoUnits.largeSpacing * 1.5

                    Label {
                        text: qsTr("Desktop Icons Size")
                        bottomPadding: LingmoUI.LingmoUnits.smallSpacing
                    }

                    TabBar {
                        Layout.fillWidth: true

                        TabButton {
                            text: qsTr("Small")
                        }

                        TabButton {
                            text: qsTr("Medium")
                        }

                        TabButton {
                            text: qsTr("Large")
                        }

                        TabButton {
                            text: qsTr("Huge")
                        }

                        currentIndex: {
                            var index = 0

                            if (appearance.desktopIconSize <= 55)
                                index = 0
                            else if (appearance.desktopIconSize <= 79)
                                index = 1
                            else if (appearance.desktopIconSize <= 95)
                                index = 2
                            else if (appearance.desktopIconSize <= 105)
                                index = 3

                            return index
                        }

                        onCurrentIndexChanged: {
                            var desktopIconSize = 0

                            switch (currentIndex) {
                            case 0:
                                desktopIconSize = 55
                                break;
                            case 1:
                                desktopIconSize = 79
                                break;
                            case 2:
                                desktopIconSize = 95
                                break;
                            case 3:
                                desktopIconSize = 105
                                break;
                            }

                            appearance.setDesktopIcons(desktopIconSize)
                        }
                    }
                }
            }
            Item {
                Layout.fillHeight: true
            }
        }
    }
}
