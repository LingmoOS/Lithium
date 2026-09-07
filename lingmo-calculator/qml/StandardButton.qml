import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import LingmoUI.CompatibleModule 3.0 as LingmoUI

Item {
    id: control

    signal clicked(string text)

    property string text
    property var icon
    property alias textColor: _label.color
    property bool flat: false

    Layout.fillWidth: true
    Layout.fillHeight: true

    property color backgroundColor: LingmoUI.Theme.backgroundColor
    property color hoveredColor: LingmoUI.Theme.darkMode ? Qt.lighter(LingmoUI.Theme.backgroundColor, 1.7)
                                                       : Qt.darker(LingmoUI.Theme.backgroundColor, 1.1)
    property color pressedColor: LingmoUI.Theme.darkMode ? Qt.lighter(LingmoUI.Theme.backgroundColor, 1.4)
                                                       : Qt.darker(LingmoUI.Theme.backgroundColor, 1.3)

    property color flatBg: LingmoUI.Theme.highlightColor
    property color flatHoveredBg: LingmoUI.Theme.darkMode ? Qt.lighter(LingmoUI.Theme.highlightColor, 1.1)
                                                        : Qt.darker(LingmoUI.Theme.highlightColor, 1.1)
    property color flatPressedBg: LingmoUI.Theme.darkMode ? Qt.lighter(LingmoUI.Theme.highlightColor, 1.05)
                                                        : Qt.darker(LingmoUI.Theme.highlightColor, 1.3)

    Rectangle {
        id: _background
        anchors.centerIn: parent
        radius: LingmoUI.Theme.smallRadius
        width: control.width - radius
        height: control.height - radius
        color: !flat ? _mouseArea.pressed ? pressedColor : _mouseArea.containsMouse
                                            ? hoveredColor : backgroundColor
                     : _mouseArea.pressed ? flatPressedBg : _mouseArea.containsMouse
                                                           ? flatHoveredBg : flatBg
        opacity: !flat ? _mouseArea.pressed || _mouseArea.containsMouse ? 0.6 : 0.7 : 1.0
    }

    MouseArea {
        id: _mouseArea
        anchors.fill: parent
        hoverEnabled: true
        onClicked: control.clicked(control.text)
    }

    Image {
        id: _icon
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        width: control.height * 0.45
        height: width
        sourceSize: Qt.size(width, height)
        source: control.icon ? control.icon : ""
        visible: _icon.status === Image.Ready
        smooth: false
        antialiasing: true
    }

    Label {
        id: _label
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        Layout.minimumWidth: parent.width
        horizontalAlignment: Text.AlignHCenter
        color: !flat ? LingmoUI.Theme.textColor : LingmoUI.Theme.highlightedTextColor
        text: control.text
        visible: !_icon.visible
        minimumPointSize: Math.round(control.height / 5)
        font.pointSize: Math.round(control.height / 5)
    }
}
