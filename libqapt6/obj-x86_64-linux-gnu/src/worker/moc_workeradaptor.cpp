/****************************************************************************
** Meta object code from reading C++ file 'workeradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "workeradaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workeradaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13WorkerAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto WorkerAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN13WorkerAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WorkerAdaptor",
        "D-Bus Interface",
        "org.kubuntu.qaptworker6",
        "D-Bus Introspection",
        "  <interface name=\"org.kubuntu.qaptworker6\">\n    <signal name=\""
        "transactionQueueChanged\">\n      <arg direction=\"out\" type=\"s\""
        " name=\"active\"/>\n      <arg direction=\"out\" type=\"as\" name="
        "\"queued\"/>\n    </signal>\n    <method name=\"updateCache\">\n  "
        "    <arg direction=\"out\" type=\"s\"/>\n    </method>\n    <metho"
        "d name=\"installFile\">\n      <arg direction=\"out\" type=\"s\"/>"
        "\n      <arg direction=\"in\" type=\"s\" name=\"file\"/>\n    </me"
        "thod>\n    <method name=\"commitChanges\">\n      <arg direction=\""
        "out\" type=\"s\"/>\n      <arg direction=\"in\" type=\"a{sv}\" nam"
        "e=\"instructionsList\"/>\n      <annotation value=\"QVariantMap\" "
        "name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n    </method>\n   "
        " <method name=\"upgradeSystem\">\n      <arg direction=\"out\" typ"
        "e=\"s\"/>\n      <arg direction=\"in\" type=\"b\" name=\"safeUpgra"
        "de\"/>\n    </method>\n    <method name=\"downloadArchives\">\n   "
        "   <arg direction=\"out\" type=\"s\"/>\n      <arg direction=\"in\""
        " type=\"as\" name=\"packageNames\"/>\n      <arg direction=\"in\" "
        "type=\"s\" name=\"dest\"/>\n    </method>\n    <method name=\"writ"
        "eFileToDisk\">\n      <arg direction=\"out\" type=\"b\"/>\n      <"
        "arg direction=\"in\" type=\"s\" name=\"contents\"/>\n      <arg di"
        "rection=\"in\" type=\"s\" name=\"path\"/>\n    </method>\n    <met"
        "hod name=\"copyArchiveToCache\">\n      <arg direction=\"out\" typ"
        "e=\"b\"/>\n      <arg direction=\"in\" type=\"s\" name=\"archivePa"
        "th\"/>\n    </method>\n  </interface>\n",
        "transactionQueueChanged",
        "",
        "active",
        "queued",
        "commitChanges",
        "QVariantMap",
        "instructionsList",
        "copyArchiveToCache",
        "archivePath",
        "downloadArchives",
        "packageNames",
        "dest",
        "installFile",
        "file",
        "updateCache",
        "upgradeSystem",
        "safeUpgrade",
        "writeFileToDisk",
        "contents",
        "path"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'transactionQueueChanged'
        QtMocHelpers::SignalData<void(const QString &, const QStringList &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QStringList, 8 },
        }}),
        // Slot 'commitChanges'
        QtMocHelpers::SlotData<QString(const QVariantMap &)>(9, 6, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'copyArchiveToCache'
        QtMocHelpers::SlotData<bool(const QString &)>(12, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'downloadArchives'
        QtMocHelpers::SlotData<QString(const QStringList &, const QString &)>(14, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QStringList, 15 }, { QMetaType::QString, 16 },
        }}),
        // Slot 'installFile'
        QtMocHelpers::SlotData<QString(const QString &)>(17, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'updateCache'
        QtMocHelpers::SlotData<QString()>(19, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'upgradeSystem'
        QtMocHelpers::SlotData<QString(bool)>(20, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'writeFileToDisk'
        QtMocHelpers::SlotData<bool(const QString &, const QString &)>(22, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 23 }, { QMetaType::QString, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WorkerAdaptor, qt_meta_tag_ZN13WorkerAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WorkerAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WorkerAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WorkerAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13WorkerAdaptorE_t>.metaTypes,
    nullptr
} };

void WorkerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkerAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->transactionQueueChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: { QString _r = _t->commitChanges((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->copyArchiveToCache((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->downloadArchives((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->installFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->updateCache();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->upgradeSystem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->writeFileToDisk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WorkerAdaptor::*)(const QString & , const QStringList & )>(_a, &WorkerAdaptor::transactionQueueChanged, 0))
            return;
    }
}

const QMetaObject *WorkerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WorkerAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int WorkerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WorkerAdaptor::transactionQueueChanged(const QString & _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
