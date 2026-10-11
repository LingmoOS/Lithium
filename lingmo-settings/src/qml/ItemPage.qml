import QtQuick 2.4
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3
import LingmoUI.CompatibleModule 3.0 as LingmoUI


Page {
    id: page

    property string headerTitle

    background: Rectangle {
        color: rootWindow.background.color
    }

    header: Item {
        height: rootWindow.header.height

        Label {
            anchors.left: parent.left
            leftPadding: LingmoUI.LingmoUnits.largeSpacing * 3
            rightPadding: Qt.application.layoutDirection === Qt.RightToLeft ? LingmoUI.LingmoUnits.largeSpacing * 3 : 0
            topPadding: LingmoUI.LingmoUnits.largeSpacing
            bottomPadding: 0
            font.pointSize: 12
            text: page.headerTitle
            color: rootWindow.active ? LingmoUI.LingmoTheme.textColor : LingmoUI.LingmoTheme.disabledTextColor
        }
    }
}
