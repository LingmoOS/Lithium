/*
 * Copyright (C) 2021 LingmoOS Team.
 *
 * Author:     revenmartin <revenmartin@gmail.com>
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

LingmoUI.MenuPopupWindow {
    id: control

    default property alias content : _mainLayout.data

    Rectangle {
        id: _background
        anchors.fill: parent
        color: LingmoUI.LingmoTheme.secondBackgroundColor
        radius: LingmoUI.LingmoTheme.hugeRadius
        opacity: 0.6
        border.color: _background.borderColor
        border.width: 1 / LingmoUI.LingmoUnits.devicePixelRatio
        border.pixelAligned: LingmoUI.LingmoUnits.devicePixelRatio > 1 ? false : true

        property var borderColor: LingmoUI.LingmoTheme.darkMode ? Qt.rgba(255, 255, 255, 0.3) : Qt.rgba(255, 255, 255, 0.1)


        LingmoUI.LingmoShadow {
            radius: _background.radius
        }

        LingmoUI.LingmoAcrylic {
            target: control
            targetRect: Qt.rect(control.x, control.y, control.width, control.height)
            cornerRadius: _background.radius
            visible: true
        }
    }

    ColumnLayout {
        id: _mainLayout
        anchors.fill: parent
        anchors.topMargin: 4
        anchors.bottomMargin: 4
    }

    function open() {
        control.show()
    }

    function popup() {
        control.show()
    }
}
