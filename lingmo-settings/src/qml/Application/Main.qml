import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import Qt5Compat.GraphicalEffects


import LingmoUI.CompatibleModule 3.0 as LingmoUI

import "../"

ItemPage {
    id: control
    headerTitle: qsTr("Application")

    Scrollable {
        anchors.fill: parent
        contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent
            spacing: LingmoUI.LingmoUnits.smallSpacing

            Label {
                text: qsTr("Default application")
                leftPadding: LingmoUI.LingmoUnits.largeSpacing
            }

            RoundedItem {
                GridLayout {
                    columns: 2
                    columnSpacing: LingmoUI.LingmoUnits.largeSpacing * 2

                    Label {
                        text: qsTr("Web browser")
                    }

                    ComboBox {
                        Layout.fillWidth: true
                    }

                    Label {
                        text: qsTr("File manager")
                    }

                    ComboBox {
                        Layout.fillWidth: true
                    }

                    Label {
                        text: qsTr("Email")
                    }

                    ComboBox {
                        Layout.fillWidth: true
                    }

                    Label {
                        text: qsTr("Terminal emulator")
                    }

                    ComboBox {
                        Layout.fillWidth: true
                    }
                }
            }
        }
    }
}
