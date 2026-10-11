import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import LingmoUI.CompatibleModule 3.0 as LingmoUI


Item {
    id: control

    height: mainLayout.implicitHeight + 1 * 2

    property alias key: keyLabel.text
    property alias value: valueLabel.text

    Layout.fillWidth: true

    Rectangle {
        id: background
        anchors.fill: parent
        color: "transparent"
        radius: LingmoUI.LingmoTheme.smallRadius
    }

    RowLayout {
        id: mainLayout
        anchors.fill: parent

        Label {
            id: keyLabel
            color: LingmoUI.LingmoTheme.textColor
        }

        Item {
            Layout.fillWidth: true
        }

        Label {
            id: valueLabel
            color: LingmoUI.LingmoTheme.disabledTextColor
        }
    }
}
