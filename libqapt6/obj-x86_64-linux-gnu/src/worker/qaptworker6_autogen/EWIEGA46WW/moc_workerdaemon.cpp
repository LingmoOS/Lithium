/****************************************************************************
** Meta object code from reading C++ file 'workerdaemon.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/worker/workerdaemon.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workerdaemon.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12WorkerDaemonE_t {};
} // unnamed namespace

template <> constexpr inline auto WorkerDaemon::qt_create_metaobjectdata<qt_meta_tag_ZN12WorkerDaemonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WorkerDaemon",
        "D-Bus Interface",
        "org.kubuntu.qaptworker",
        "transactionQueueChanged",
        "",
        "active",
        "queued",
        "updateCache",
        "installFile",
        "file",
        "commitChanges",
        "QVariantMap",
        "instructionsList",
        "upgradeSystem",
        "safeUpgrade",
        "downloadArchives",
        "packageNames",
        "dest",
        "writeFileToDisk",
        "contents",
        "path",
        "copyArchiveToCache",
        "archivePath",
        "checkIdle"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'transactionQueueChanged'
        QtMocHelpers::SignalData<void(const QString &, const QStringList &)>(3, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QStringList, 6 },
        }}),
        // Slot 'updateCache'
        QtMocHelpers::SlotData<QString()>(7, 4, QMC::AccessPublic, QMetaType::QString),
        // Slot 'installFile'
        QtMocHelpers::SlotData<QString(const QString &)>(8, 4, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'commitChanges'
        QtMocHelpers::SlotData<QString(QVariantMap)>(10, 4, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'upgradeSystem'
        QtMocHelpers::SlotData<QString(bool)>(13, 4, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'downloadArchives'
        QtMocHelpers::SlotData<QString(const QStringList &, const QString &)>(15, 4, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QStringList, 16 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'writeFileToDisk'
        QtMocHelpers::SlotData<bool(const QString &, const QString &)>(18, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QString, 20 },
        }}),
        // Slot 'copyArchiveToCache'
        QtMocHelpers::SlotData<bool(const QString &)>(21, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'checkIdle'
        QtMocHelpers::SlotData<void()>(23, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<WorkerDaemon, qt_meta_tag_ZN12WorkerDaemonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WorkerDaemon::staticMetaObject = { {
    QMetaObject::SuperData::link<QCoreApplication::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12WorkerDaemonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12WorkerDaemonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12WorkerDaemonE_t>.metaTypes,
    nullptr
} };

void WorkerDaemon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkerDaemon *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->transactionQueueChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: { QString _r = _t->updateCache();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->installFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->commitChanges((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->upgradeSystem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->downloadArchives((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->writeFileToDisk((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->copyArchiveToCache((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->checkIdle(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WorkerDaemon::*)(const QString & , const QStringList & )>(_a, &WorkerDaemon::transactionQueueChanged, 0))
            return;
    }
}

const QMetaObject *WorkerDaemon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerDaemon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12WorkerDaemonE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QCoreApplication::qt_metacast(_clname);
}

int WorkerDaemon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WorkerDaemon::transactionQueueChanged(const QString & _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
