/*
 * Copyright 2017 Marco Martin <mart@kde.org>
 * Copyright 2017 The Qt Company Ltd.
 *
 * GNU Lesser General Public License Usage
 * Alternatively, this file may be used under the terms of the GNU Lesser
 * General Public License version 3 as published by the Free Software
 * Foundation and appearing in the file LICENSE.LGPLv3 included in the
 * packaging of this file. Please review the following information to
 * ensure the GNU Lesser General Public License version 3 requirements
 * will be met: https://www.gnu.org/licenses/lgpl.html.
 *
 * GNU General Public License Usage
 * Alternatively, this file may be used under the terms of the GNU
 * General Public License version 2.0 or later as published by the Free
 * Software Foundation and appearing in the file LICENSE.GPL included in
 * the packaging of this file. Please review the following information to
 * ensure the GNU General Public License version 2.0 requirements will be
 * met: http://www.gnu.org/licenses/gpl-2.0.html.
 */


import QtQuick 2.6
import QtQuick.Window 2.1
import QtQuick.Controls 2.3 as Controls
import QtQuick.Templates 2.3 as T
import LingmoUI.CompatibleModule 3.0 as LingmoUI

T.TextField {
    id: control

    implicitWidth: Math.max(200,
                            placeholderText ? placeholder.implicitWidth + leftPadding + rightPadding : 0)
                            || contentWidth + leftPadding + rightPadding + LingmoUI.LingmoUnits.extendBorderWidth
    implicitHeight: Math.max(contentHeight + topPadding + bottomPadding,
                             background ? background.implicitHeight : 0,
                             placeholder.implicitHeight + topPadding + bottomPadding + LingmoUI.LingmoUnits.extendBorderWidth)

    // padding: 6
    leftPadding: LingmoUI.LingmoUnits.smallSpacing + LingmoUI.LingmoUnits.extendBorderWidth
    rightPadding: LingmoUI.LingmoUnits.smallSpacing + LingmoUI.LingmoUnits.extendBorderWidth

    //Text.NativeRendering is broken on non integer pixel ratios
    // renderType: Window.devicePixelRatio % 1 !== 0 ? Text.QtRendering : Text.NativeRendering
    renderType: LingmoUI.LingmoTheme.renderType

    color: control.enabled ? LingmoUI.LingmoTheme.textColor : LingmoUI.LingmoTheme.disabledTextColor
    selectionColor: LingmoUI.LingmoTheme.highlightColor
    selectedTextColor: LingmoUI.LingmoTheme.highlightedTextColor
    selectByMouse: true

    horizontalAlignment: Text.AlignLeft
    verticalAlignment: TextInput.AlignVCenter

    opacity: control.enabled ? 1.0 : 0.5

 	// cursorDelegate: CursorDelegate { }

    Controls.Label {
        id: placeholder
        x: control.leftPadding
        y: control.topPadding
        width: control.width - (control.leftPadding + control.rightPadding)
        height: control.height - (control.topPadding + control.bottomPadding)

        text: control.placeholderText
        font: control.font
        color: LingmoUI.LingmoTheme.textColor
        opacity: 0.4
        horizontalAlignment: Text.AlignLeft
        verticalAlignment: control.verticalAlignment
        visible: !control.length && !control.preeditText && (!control.activeFocus || control.horizontalAlignment !== Qt.AlignHCenter)
        elide: Text.ElideRight
        wrapMode: Text.NoWrap
	}

    background: Rectangle {
        implicitWidth: (LingmoUI.LingmoUnits.iconSizes.medium * 3) + LingmoUI.LingmoUnits.smallSpacing + LingmoUI.LingmoUnits.extendBorderWidth
        implicitHeight: LingmoUI.LingmoUnits.iconSizes.medium + LingmoUI.LingmoUnits.smallSpacing + LingmoUI.LingmoUnits.extendBorderWidth
        // color: control.activeFocus ? Qt.lighter(LingmoUI.LingmoTheme.backgroundColor, 1.4) : LingmoUI.LingmoTheme.backgroundColor
        color: LingmoUI.LingmoTheme.alternateBackgroundColor
        radius: LingmoUI.LingmoTheme.smallRadius

        border.width: 1
        border.color: control.activeFocus ? LingmoUI.LingmoTheme.highlightColor : LingmoUI.LingmoTheme.alternateBackgroundColor

        // Rectangle {
        //     id: _border
        //     anchors.fill: parent
        //     color: "transparent"
        //     border.color: control.activeFocus ? Qt.rgba(LingmoUI.LingmoTheme.highlightColor.r,
        //                                                 LingmoUI.LingmoTheme.highlightColor.g,
        //                                                 LingmoUI.LingmoTheme.highlightColor.b, 0.2) : "transparent"
        //     border.width: LingmoUI.LingmoUnits.extendBorderWidth
        //     radius: LingmoUI.LingmoTheme.smallRadius + LingmoUI.LingmoUnits.extendBorderWidth

        //     Behavior on border.color {
        //         ColorAnimation {
        //             duration: 50
        //         }
        //     }
        // }

        // Rectangle {
        //     anchors.fill: parent
        //     anchors.margins: LingmoUI.LingmoUnits.extendBorderWidth
        //     radius: LingmoUI.LingmoTheme.smallRadius
        //     color: LingmoUI.LingmoTheme.backgroundColor
        //     border.color: control.activeFocus ? LingmoUI.LingmoTheme.highlightColor : Qt.tint(LingmoUI.LingmoTheme.textColor, Qt.rgba(LingmoUI.LingmoTheme.backgroundColor.r, LingmoUI.LingmoTheme.backgroundColor.g, LingmoUI.LingmoTheme.backgroundColor.b, 0.7))
        //     border.width: 1
        // }
    }
}
