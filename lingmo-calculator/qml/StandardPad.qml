import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import LingmoUI.CompatibleModule 3.0 as LingmoUI

Item {
    id: control

    signal pressed(string text)

    GridLayout {
        id: _mainLayout
        anchors.fill: parent
        anchors.margins: LingmoUI.Units.smallSpacing
        columnSpacing: 1
        rowSpacing: 1
        columns: 4

        StandardButton { text: "C"; onClicked: function(text){control.pressed(text); }}
        StandardButton {
            icon: LingmoUI.Theme.darkMode ? "qrc:/images/dark/backspace.svg" : "qrc:/images/light/backspace.svg"
            onClicked: control.pressed("BACKSPACE")
        }
        StandardButton { text: "%"; onClicked: function(text){control.pressed(text);} }
        StandardButton { text: "÷"; textColor: LingmoUI.Theme.highlightColor; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "7"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "8"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "9"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "×"; textColor: LingmoUI.Theme.highlightColor; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "4"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "5"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "6"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "-"; textColor: LingmoUI.Theme.highlightColor; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "1"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "2"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "3"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "+"; textColor: LingmoUI.Theme.highlightColor; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "0"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "."; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "()"; onClicked: function(text){control.pressed(text); }}
        StandardButton { text: "="; flat: true; onClicked: function(text){control.pressed(text); }}
    }
}
