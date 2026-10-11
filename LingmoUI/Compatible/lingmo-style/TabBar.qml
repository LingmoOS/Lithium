import QtQuick 2.9
import QtQuick.Templates 2.2 as T
import LingmoUI.GraphicalEffects
import LingmoUI.CompatibleModule 3.0 as LingmoUI

T.TabBar {
    id: control

    implicitWidth: Math.max(background.implicitWidth, contentItem.implicitWidth + LingmoUI.LingmoUnits.smallSpacing)
    implicitHeight: contentItem.implicitHeight

    spacing: 0

    contentItem: ListView {
        implicitWidth: contentWidth
        implicitHeight: control.contentModel.get(0).height

        model: control.contentModel
        currentIndex: control.currentIndex

        spacing: control.spacing
        orientation: ListView.Horizontal
        boundsBehavior: Flickable.StopAtBounds
        flickableDirection: Flickable.AutoFlickIfNeeded
        snapMode: ListView.SnapToItem

        highlightMoveDuration: 0
        highlightResizeDuration: 0
        highlightFollowsCurrentItem: true
        highlightRangeMode: ListView.ApplyRange
        preferredHighlightBegin: 48
        preferredHighlightEnd: width - 48

        highlight: Item {
            Rectangle {
                anchors {
                    fill: parent
                    margins: 2
                }
                color: LingmoUI.LingmoTheme.darkMode ? Qt.lighter(LingmoUI.LingmoTheme.secondBackgroundColor, 2)
                                             : LingmoUI.LingmoTheme.secondBackgroundColor
                radius: LingmoUI.LingmoTheme.smallRadius

                layer.enabled: LingmoUI.LingmoTheme.darkMode
                layer.effect: DropShadow {
                    transparentBorder: true
                    radius: 2
                    samples: 2
                    horizontalOffset: 0
                    verticalOffset: 0
                    color: Qt.rgba(0, 0, 0, 0.11)
                }
            }
        }
    }

    background: Rectangle {
        color: LingmoUI.LingmoTheme.alternateBackgroundColor
        radius: LingmoUI.LingmoTheme.smallRadius + 2
    }
}
