/****************************************************************************
** Meta object code from reading C++ file 'workerinterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "workerinterface_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workerinterface_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKubuntuQaptworker6Interface::qt_create_metaobjectdata<qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKubuntuQaptworker6Interface",
        "transactionQueueChanged",
        "",
        "active",
        "queued",
        "commitChanges",
        "QDBusPendingReply<QString>",
        "QVariantMap",
        "instructionsList",
        "copyArchiveToCache",
        "QDBusPendingReply<bool>",
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
        QtMocHelpers::SignalData<void(const QString &, const QStringList &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 },
        }}),
        // Slot 'commitChanges'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>(const QVariantMap &)>(5, 2, QMC::AccessPublic, 0x80000000 | 6, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'copyArchiveToCache'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>(const QString &)>(9, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'downloadArchives'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>(const QStringList &, const QString &)>(12, 2, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QStringList, 13 }, { QMetaType::QString, 14 },
        }}),
        // Slot 'installFile'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>(const QString &)>(15, 2, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QString, 16 },
        }}),
        // Slot 'updateCache'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>()>(17, 2, QMC::AccessPublic, 0x80000000 | 6),
        // Slot 'upgradeSystem'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>(bool)>(18, 2, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'writeFileToDisk'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>(const QString &, const QString &)>(20, 2, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 21 }, { QMetaType::QString, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKubuntuQaptworker6Interface, qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKubuntuQaptworker6Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKubuntuQaptworker6Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKubuntuQaptworker6Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->transactionQueueChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: { QDBusPendingReply<QString> _r = _t->commitChanges((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<bool> _r = _t->copyArchiveToCache((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<QString> _r = _t->downloadArchives((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<QString> _r = _t->installFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<QString> _r = _t->updateCache();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<QString> _r = _t->upgradeSystem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<bool> _r = _t->writeFileToDisk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKubuntuQaptworker6Interface::*)(const QString & , const QStringList & )>(_a, &OrgKubuntuQaptworker6Interface::transactionQueueChanged, 0))
            return;
    }
}

const QMetaObject *OrgKubuntuQaptworker6Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKubuntuQaptworker6Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30OrgKubuntuQaptworker6InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKubuntuQaptworker6Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
void OrgKubuntuQaptworker6Interface::transactionQueueChanged(const QString & _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
