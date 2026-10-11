import QtQuick 2.1
import QtQuick.Window 2.2
import QtQuick.Templates 2.3 as T
import LingmoUI.CompatibleModule 3.0 as LingmoUI

T.Label {
    id: control

    verticalAlignment: lineCount > 1 ? Text.AlignTop : Text.AlignVCenter

    activeFocusOnTab: false
    // Text.NativeRendering is broken on non integer pixel ratios
    // renderType: Window.devicePixelRatio % 1 !== 0 ? Text.QtRendering : Text.NativeRendering

    renderType: LingmoUI.LingmoTheme.renderType

    font.capitalization: LingmoUI.LingmoTheme.defaultFont.capitalization
    font.family: LingmoUI.LingmoTheme.fontFamily
    font.italic: LingmoUI.LingmoTheme.defaultFont.italic
    font.letterSpacing: LingmoUI.LingmoTheme.defaultFont.letterSpacing
    font.pointSize: LingmoUI.LingmoTheme.fontSize
    font.strikeout: LingmoUI.LingmoTheme.defaultFont.strikeout
    font.underline: LingmoUI.LingmoTheme.defaultFont.underline
    font.weight: LingmoUI.LingmoTheme.defaultFont.weight
    font.wordSpacing: LingmoUI.LingmoTheme.defaultFont.wordSpacing
    color: LingmoUI.LingmoTheme.textColor
    linkColor: LingmoUI.LingmoTheme.linkColor

    opacity: enabled ? 1 : 0.6

    Accessible.role: Accessible.StaticText
    Accessible.name: text
}
