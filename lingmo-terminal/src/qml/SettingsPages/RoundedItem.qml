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

import QtQuick 2.12
import QtQuick.Layouts 1.12
import LingmoUI as LingmoUI

Rectangle {
    Layout.fillWidth: true

    default property alias content : _mainLayout.data
    property alias spacing: _mainLayout.spacing
    property alias layout: _mainLayout

    color: LingmoUI.LingmoTheme.secondBackgroundColor
    radius: LingmoUI.LingmoTheme.mediumRadius

    Behavior on color {
        ColorAnimation {
            duration: 200
            easing.type: Easing.Linear
        }
    }

    implicitHeight: _mainLayout.implicitHeight +
                    _mainLayout.anchors.topMargin +
                    _mainLayout.anchors.bottomMargin

    ColumnLayout {
        id: _mainLayout
        anchors.fill: parent
        anchors.leftMargin: LingmoUI.LingmoUnits.largeSpacing * 1.5
        anchors.rightMargin: LingmoUI.LingmoUnits.largeSpacing * 1.5
        anchors.topMargin: LingmoUI.LingmoUnits.largeSpacing
        anchors.bottomMargin: LingmoUI.LingmoUnits.largeSpacing
        spacing: LingmoUI.LingmoUnits.largeSpacing
    }
}
