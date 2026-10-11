import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import LingmoUI as LingmoUI

Page {
    id: page

    property string headerTitle

    background: Rectangle {
        color: control.background.color
    }

    header: Item {
        height: control.header.height
        Rectangle {
            anchors.fill: parent
            color: control.background.color
            Label {
                anchors.left: parent.left
                leftPadding: LingmoUI.LingmoUnits.largeSpacing
                rightPadding: Qt.application.layoutDirection === Qt.RightToLeft ? LingmoUI.LingmoUnits.largeSpacing * 3 : 0
                topPadding: LingmoUI.LingmoUnits.smallSpacing
                bottomPadding: 0
                font.pointSize: 12
                text: page.headerTitle
                color: control.active ? LingmoUI.LingmoTheme.textColor : LingmoUI.LingmoTheme.disabledTextColor
            }
        }
    }
}
