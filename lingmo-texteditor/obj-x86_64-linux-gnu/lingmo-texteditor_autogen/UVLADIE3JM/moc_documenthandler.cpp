/****************************************************************************
** Meta object code from reading C++ file 'documenthandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/documenthandler.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documenthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13DocumentAlertE_t {};
} // unnamed namespace

template <> constexpr inline auto DocumentAlert::qt_create_metaobjectdata<qt_meta_tag_ZN13DocumentAlertE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DocumentAlert",
        "done",
        "",
        "index",
        "triggerAction",
        "actionIndex",
        "alertIndex",
        "title",
        "body",
        "level",
        "actionLabels"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'done'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'triggerAction'
        QtMocHelpers::SlotData<void(const int &, const int &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'title'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'body'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'level'
        QtMocHelpers::PropertyData<uint>(9, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'actionLabels'
        QtMocHelpers::PropertyData<QStringList>(10, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DocumentAlert, qt_meta_tag_ZN13DocumentAlertE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DocumentAlert::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DocumentAlertE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DocumentAlertE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13DocumentAlertE_t>.metaTypes,
    nullptr
} };

void DocumentAlert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DocumentAlert *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->done((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->triggerAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DocumentAlert::*)(int )>(_a, &DocumentAlert::done, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->m_title; break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->m_body; break;
        case 2: *reinterpret_cast<uint*>(_v) = _t->m_level; break;
        case 3: *reinterpret_cast<QStringList*>(_v) = _t->actionLabels(); break;
        default: break;
        }
    }
}

const QMetaObject *DocumentAlert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentAlert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DocumentAlertE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentAlert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DocumentAlert::done(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN6AlertsE_t {};
} // unnamed namespace

template <> constexpr inline auto Alerts::qt_create_metaobjectdata<qt_meta_tag_ZN6AlertsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Alerts"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Alerts, qt_meta_tag_ZN6AlertsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Alerts::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6AlertsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6AlertsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6AlertsE_t>.metaTypes,
    nullptr
} };

void Alerts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Alerts *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Alerts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alerts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6AlertsE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Alerts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10FileLoaderE_t {};
} // unnamed namespace

template <> constexpr inline auto FileLoader::qt_create_metaobjectdata<qt_meta_tag_ZN10FileLoaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileLoader",
        "fileReady",
        "",
        "array",
        "QUrl",
        "url",
        "loadFile"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fileReady'
        QtMocHelpers::SignalData<void(QString, QUrl)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'loadFile'
        QtMocHelpers::SlotData<void(const QUrl &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileLoader, qt_meta_tag_ZN10FileLoaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FileLoaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FileLoaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10FileLoaderE_t>.metaTypes,
    nullptr
} };

void FileLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileLoader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileReady((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 1: _t->loadFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FileLoader::*)(QString , QUrl )>(_a, &FileLoader::fileReady, 0))
            return;
    }
}

const QMetaObject *FileLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FileLoaderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FileLoader::fileReady(QString _t1, QUrl _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN15DocumentHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto DocumentHandler::qt_create_metaobjectdata<qt_meta_tag_ZN15DocumentHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DocumentHandler",
        "documentChanged",
        "",
        "fileSaved",
        "cursorPositionChanged",
        "selectionStartChanged",
        "selectionEndChanged",
        "fontFamilyChanged",
        "textColorChanged",
        "alignmentChanged",
        "boldChanged",
        "uppercaseChanged",
        "italicChanged",
        "underlineChanged",
        "isRichChanged",
        "lineCountChanged",
        "fontSizeChanged",
        "tabSpaceChanged",
        "textChanged",
        "fileUrlChanged",
        "fileInfoChanged",
        "loaded",
        "QUrl",
        "url",
        "error",
        "message",
        "loadFile",
        "autoReloadChanged",
        "autoSaveChanged",
        "externallyModifiedChanged",
        "backgroundColorChanged",
        "formatNameChanged",
        "modifiedChanged",
        "currentLineIndexChanged",
        "enableSyntaxHighlightingChanged",
        "themeChanged",
        "searchFound",
        "start",
        "end",
        "findCaseSensitivelyChanged",
        "findWholeWordsChanged",
        "fileNameChanged",
        "load",
        "saveAs",
        "find",
        "query",
        "forward",
        "replace",
        "value",
        "replaceAll",
        "isFoldable",
        "line",
        "isFolded",
        "toggleFold",
        "lineHeight",
        "lineCount",
        "getCurrentLineIndex",
        "goToLine",
        "getLanguageNameList",
        "getLanguageNameFromFileName",
        "fileName",
        "getThemes",
        "document",
        "QQuickTextDocument*",
        "cursorPosition",
        "selectionStart",
        "selectionEnd",
        "textColor",
        "QColor",
        "fontFamily",
        "alignment",
        "Qt::Alignment",
        "bold",
        "uppercase",
        "italic",
        "underline",
        "isRich",
        "fontSize",
        "tabSpace",
        "fileType",
        "fileInfo",
        "QVariantMap",
        "fileUrl",
        "text",
        "externallyModified",
        "modified",
        "autoReload",
        "autoSave",
        "formatName",
        "currentLineIndex",
        "alerts",
        "Alerts*",
        "backgroundColor",
        "theme",
        "enableSyntaxHighlighting",
        "findWholeWords",
        "findCaseSensitively"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'documentChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileSaved'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cursorPositionChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectionStartChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectionEndChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontFamilyChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textColorChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'alignmentChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'boldChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'uppercaseChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'italicChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'underlineChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isRichChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lineCountChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontSizeChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabSpaceChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileUrlChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileInfoChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loaded'
        QtMocHelpers::SignalData<void(const QUrl &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Signal 'error'
        QtMocHelpers::SignalData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'loadFile'
        QtMocHelpers::SignalData<void(QUrl)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Signal 'autoReloadChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoSaveChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'externallyModifiedChanged'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundColorChanged'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'formatNameChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modifiedChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentLineIndexChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enableSyntaxHighlightingChanged'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchFound'
        QtMocHelpers::SignalData<void(int, int)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 37 }, { QMetaType::Int, 38 },
        }}),
        // Signal 'findCaseSensitivelyChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'findWholeWordsChanged'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fileNameChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void(const QUrl &)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void(const QUrl &)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'find'
        QtMocHelpers::SlotData<void(const QString &, const bool &)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 45 }, { QMetaType::Bool, 46 },
        }}),
        // Slot 'find'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 45 },
        }}),
        // Slot 'replace'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 45 }, { QMetaType::QString, 48 },
        }}),
        // Slot 'replaceAll'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 45 }, { QMetaType::QString, 48 },
        }}),
        // Slot 'isFoldable'
        QtMocHelpers::SlotData<bool(const int &) const>(50, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 51 },
        }}),
        // Slot 'isFolded'
        QtMocHelpers::SlotData<bool(const int &) const>(52, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 51 },
        }}),
        // Slot 'toggleFold'
        QtMocHelpers::SlotData<void(const int &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 51 },
        }}),
        // Slot 'lineHeight'
        QtMocHelpers::SlotData<int(const int &)>(54, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 51 },
        }}),
        // Slot 'lineCount'
        QtMocHelpers::SlotData<int()>(55, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'getCurrentLineIndex'
        QtMocHelpers::SlotData<int()>(56, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'goToLine'
        QtMocHelpers::SlotData<int(const int &)>(57, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 51 },
        }}),
        // Slot 'getLanguageNameList'
        QtMocHelpers::SlotData<const QStringList()>(58, 2, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'getLanguageNameFromFileName'
        QtMocHelpers::SlotData<const QString(const QUrl &)>(59, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 22, 60 },
        }}),
        // Slot 'getThemes'
        QtMocHelpers::SlotData<const QStringList()>(61, 2, QMC::AccessPublic, QMetaType::QStringList),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'document'
        QtMocHelpers::PropertyData<QQuickTextDocument*>(62, 0x80000000 | 63, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'cursorPosition'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'selectionStart'
        QtMocHelpers::PropertyData<int>(65, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'selectionEnd'
        QtMocHelpers::PropertyData<int>(66, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'textColor'
        QtMocHelpers::PropertyData<QColor>(67, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'fontFamily'
        QtMocHelpers::PropertyData<QString>(69, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'alignment'
        QtMocHelpers::PropertyData<Qt::Alignment>(70, 0x80000000 | 71, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'bold'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'uppercase'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'italic'
        QtMocHelpers::PropertyData<bool>(74, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'underline'
        QtMocHelpers::PropertyData<bool>(75, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'isRich'
        QtMocHelpers::PropertyData<bool>(76, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
        // property 'lineCount'
        QtMocHelpers::PropertyData<int>(55, QMetaType::Int, QMC::DefaultPropertyFlags, 13),
        // property 'fontSize'
        QtMocHelpers::PropertyData<int>(77, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'tabSpace'
        QtMocHelpers::PropertyData<qreal>(78, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(60, QMetaType::QString, QMC::DefaultPropertyFlags, 17),
        // property 'fileType'
        QtMocHelpers::PropertyData<QString>(79, QMetaType::QString, QMC::DefaultPropertyFlags, 17),
        // property 'fileInfo'
        QtMocHelpers::PropertyData<QVariantMap>(80, 0x80000000 | 81, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 18),
        // property 'fileUrl'
        QtMocHelpers::PropertyData<QUrl>(82, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 17),
        // property 'text'
        QtMocHelpers::PropertyData<QString>(83, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'externallyModified'
        QtMocHelpers::PropertyData<bool>(84, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'modified'
        QtMocHelpers::PropertyData<bool>(85, QMetaType::Bool, QMC::DefaultPropertyFlags, 27),
        // property 'autoReload'
        QtMocHelpers::PropertyData<bool>(86, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 22),
        // property 'autoSave'
        QtMocHelpers::PropertyData<bool>(87, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'formatName'
        QtMocHelpers::PropertyData<QString>(88, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 26),
        // property 'currentLineIndex'
        QtMocHelpers::PropertyData<int>(89, QMetaType::Int, QMC::DefaultPropertyFlags, 28),
        // property 'alerts'
        QtMocHelpers::PropertyData<Alerts*>(90, 0x80000000 | 91, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'backgroundColor'
        QtMocHelpers::PropertyData<QColor>(92, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 25),
        // property 'theme'
        QtMocHelpers::PropertyData<QString>(93, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 30),
        // property 'enableSyntaxHighlighting'
        QtMocHelpers::PropertyData<bool>(94, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 29),
        // property 'findWholeWords'
        QtMocHelpers::PropertyData<bool>(95, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 33),
        // property 'findCaseSensitively'
        QtMocHelpers::PropertyData<bool>(96, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 32),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(60, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 34),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DocumentHandler, qt_meta_tag_ZN15DocumentHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DocumentHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15DocumentHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15DocumentHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15DocumentHandlerE_t>.metaTypes,
    nullptr
} };

void DocumentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DocumentHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->documentChanged(); break;
        case 1: _t->fileSaved(); break;
        case 2: _t->cursorPositionChanged(); break;
        case 3: _t->selectionStartChanged(); break;
        case 4: _t->selectionEndChanged(); break;
        case 5: _t->fontFamilyChanged(); break;
        case 6: _t->textColorChanged(); break;
        case 7: _t->alignmentChanged(); break;
        case 8: _t->boldChanged(); break;
        case 9: _t->uppercaseChanged(); break;
        case 10: _t->italicChanged(); break;
        case 11: _t->underlineChanged(); break;
        case 12: _t->isRichChanged(); break;
        case 13: _t->lineCountChanged(); break;
        case 14: _t->fontSizeChanged(); break;
        case 15: _t->tabSpaceChanged(); break;
        case 16: _t->textChanged(); break;
        case 17: _t->fileUrlChanged(); break;
        case 18: _t->fileInfoChanged(); break;
        case 19: _t->loaded((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 20: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->loadFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 22: _t->autoReloadChanged(); break;
        case 23: _t->autoSaveChanged(); break;
        case 24: _t->externallyModifiedChanged(); break;
        case 25: _t->backgroundColorChanged(); break;
        case 26: _t->formatNameChanged(); break;
        case 27: _t->modifiedChanged(); break;
        case 28: _t->currentLineIndexChanged(); break;
        case 29: _t->enableSyntaxHighlightingChanged(); break;
        case 30: _t->themeChanged(); break;
        case 31: _t->searchFound((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 32: _t->findCaseSensitivelyChanged(); break;
        case 33: _t->findWholeWordsChanged(); break;
        case 34: _t->fileNameChanged(); break;
        case 35: _t->load((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 36: _t->saveAs((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 37: _t->find((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 38: _t->find((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->replace((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 40: _t->replaceAll((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 41: { bool _r = _t->isFoldable((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->isFolded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->toggleFold((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 44: { int _r = _t->lineHeight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 45: { int _r = _t->lineCount();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 46: { int _r = _t->getCurrentLineIndex();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 47: { int _r = _t->goToLine((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 48: { QStringList _r = _t->getLanguageNameList();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->getLanguageNameFromFileName((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 50: { QStringList _r = _t->getThemes();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::documentChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::fileSaved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::cursorPositionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::selectionStartChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::selectionEndChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::fontFamilyChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::textColorChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::alignmentChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::boldChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::uppercaseChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::italicChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::underlineChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::isRichChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::lineCountChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::fontSizeChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::tabSpaceChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::textChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::fileUrlChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::fileInfoChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)(const QUrl & )>(_a, &DocumentHandler::loaded, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)(const QString & )>(_a, &DocumentHandler::error, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)(QUrl )>(_a, &DocumentHandler::loadFile, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::autoReloadChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::autoSaveChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::externallyModifiedChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::backgroundColorChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::formatNameChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::modifiedChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::currentLineIndexChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::enableSyntaxHighlightingChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::themeChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)(int , int )>(_a, &DocumentHandler::searchFound, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::findCaseSensitivelyChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::findWholeWordsChanged, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (DocumentHandler::*)()>(_a, &DocumentHandler::fileNameChanged, 34))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Alerts* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickTextDocument* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QQuickTextDocument**>(_v) = _t->document(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->selectionStart(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->selectionEnd(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->textColor(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->fontFamily(); break;
        case 6: *reinterpret_cast<Qt::Alignment*>(_v) = _t->alignment(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->bold(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->uppercase(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->italic(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->underline(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->getIsRich(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->lineCount(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->fontSize(); break;
        case 14: *reinterpret_cast<qreal*>(_v) = _t->tabSpace(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 16: *reinterpret_cast<QString*>(_v) = _t->fileType(); break;
        case 17: *reinterpret_cast<QVariantMap*>(_v) = _t->fileInfo(); break;
        case 18: *reinterpret_cast<QUrl*>(_v) = _t->fileUrl(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->text(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->getExternallyModified(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->getModified(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->getAutoReload(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->autoSave(); break;
        case 24: *reinterpret_cast<QString*>(_v) = _t->formatName(); break;
        case 25: *reinterpret_cast<int*>(_v) = _t->getCurrentLineIndex(); break;
        case 26: *reinterpret_cast<Alerts**>(_v) = _t->getAlerts(); break;
        case 27: *reinterpret_cast<QColor*>(_v) = _t->getBackgroundColor(); break;
        case 28: *reinterpret_cast<QString*>(_v) = _t->theme(); break;
        case 29: *reinterpret_cast<bool*>(_v) = _t->enableSyntaxHighlighting(); break;
        case 30: *reinterpret_cast<bool*>(_v) = _t->m_findWholeWords; break;
        case 31: *reinterpret_cast<bool*>(_v) = _t->m_findCaseSensitively; break;
        case 32: *reinterpret_cast<QString*>(_v) = _t->m_fileName; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDocument(*reinterpret_cast<QQuickTextDocument**>(_v)); break;
        case 1: _t->setCursorPosition(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setSelectionStart(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setSelectionEnd(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setTextColor(*reinterpret_cast<QColor*>(_v)); break;
        case 5: _t->setFontFamily(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setAlignment(*reinterpret_cast<Qt::Alignment*>(_v)); break;
        case 7: _t->setBold(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setUppercase(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setItalic(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setUnderline(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setFontSize(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setTabSpace(*reinterpret_cast<qreal*>(_v)); break;
        case 18: _t->setFileUrl(*reinterpret_cast<QUrl*>(_v)); break;
        case 19: _t->setText(*reinterpret_cast<QString*>(_v)); break;
        case 20: _t->setExternallyModified(*reinterpret_cast<bool*>(_v)); break;
        case 22: _t->setAutoReload(*reinterpret_cast<bool*>(_v)); break;
        case 23: _t->setAutoSave(*reinterpret_cast<bool*>(_v)); break;
        case 24: _t->setFormatName(*reinterpret_cast<QString*>(_v)); break;
        case 27: _t->setBackgroundColor(*reinterpret_cast<QColor*>(_v)); break;
        case 28: _t->setTheme(*reinterpret_cast<QString*>(_v)); break;
        case 29: _t->setEnableSyntaxHighlighting(*reinterpret_cast<bool*>(_v)); break;
        case 30:
            if (QtMocHelpers::setProperty(_t->m_findWholeWords, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->findWholeWordsChanged();
            break;
        case 31:
            if (QtMocHelpers::setProperty(_t->m_findCaseSensitively, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->findCaseSensitivelyChanged();
            break;
        case 32:
            if (QtMocHelpers::setProperty(_t->m_fileName, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->fileNameChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *DocumentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15DocumentHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 51;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void DocumentHandler::documentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DocumentHandler::fileSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DocumentHandler::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DocumentHandler::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DocumentHandler::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DocumentHandler::fontFamilyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DocumentHandler::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DocumentHandler::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DocumentHandler::boldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DocumentHandler::uppercaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DocumentHandler::italicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DocumentHandler::underlineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DocumentHandler::isRichChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void DocumentHandler::lineCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void DocumentHandler::fontSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void DocumentHandler::tabSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void DocumentHandler::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void DocumentHandler::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void DocumentHandler::fileInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void DocumentHandler::loaded(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void DocumentHandler::error(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void DocumentHandler::loadFile(QUrl _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void DocumentHandler::autoReloadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void DocumentHandler::autoSaveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void DocumentHandler::externallyModifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void DocumentHandler::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void DocumentHandler::formatNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void DocumentHandler::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void DocumentHandler::currentLineIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void DocumentHandler::enableSyntaxHighlightingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void DocumentHandler::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void DocumentHandler::searchFound(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 31, nullptr, _t1, _t2);
}

// SIGNAL 32
void DocumentHandler::findCaseSensitivelyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void DocumentHandler::findWholeWordsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void DocumentHandler::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}
QT_WARNING_POP
