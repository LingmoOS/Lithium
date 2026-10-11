/*
 * Copyright (C) 2021 LingmoOS Team.
 *
 * Author:    ChungZH <chungzh07@gmail.com>    
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import LingmoUI.CompatibleModule as LingmoUI

TextField {
    id: control

    property list<QtObject> rightActions

    rightPadding: LingmoUI.LingmoUnits.smallSpacing + rightActionsRow.width

    Row {
        id: rightActionsRow
        padding: LingmoUI.LingmoUnits.smallSpacing
        layoutDirection: Qt.RightToLeft
        anchors.right: parent.right
        anchors.rightMargin: LingmoUI.LingmoUnits.smallSpacing
        anchors.verticalCenter: parent.verticalCenter
        height: control.implicitHeight - 2 * LingmoUI.LingmoUnits.smallSpacing
        Repeater {
            model: control.rightActions
            Icon {
                implicitWidth: LingmoUI.LingmoUnits.iconSizes.small
                implicitHeight: LingmoUI.LingmoUnits.iconSizes.small

                anchors.verticalCenter: parent.verticalCenter

                source: modelData.icon.name.length > 0 ? modelData.icon.name : modelData.icon.source
                enabled: modelData.enabled
                MouseArea {
                    id: actionArea
                    anchors.fill: parent
                    onClicked: modelData.trigger()
                    cursorShape: Qt.PointingHandCursor
                }
            }
        }
    }
    
}
