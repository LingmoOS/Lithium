/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QApt7BackendE_t {};
} // unnamed namespace

template <> constexpr inline auto QApt::Backend::qt_create_metaobjectdata<qt_meta_tag_ZN4QApt7BackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QApt::Backend",
        "packageChanged",
        "",
        "cacheReloadStarted",
        "cacheReloadFinished",
        "xapianUpdateStarted",
        "xapianUpdateFinished",
        "xapianUpdateProgress",
        "percentage",
        "transactionQueueChanged",
        "active",
        "queue",
        "setUndoRedoCacheSize",
        "newSize",
        "saveCacheState",
        "restoreCacheState",
        "CacheState",
        "state",
        "undo",
        "redo",
        "markPackagesForUpgrade",
        "markPackagesForDistUpgrade",
        "markPackagesForAutoRemove",
        "markPackageForInstall",
        "name",
        "markPackageForRemoval",
        "markPackages",
        "QApt::PackageList",
        "packages",
        "QApt::Package::State",
        "action",
        "setCompressEvents",
        "enabled",
        "commitChanges",
        "QApt::Transaction*",
        "installPackages",
        "removePackages",
        "downloadArchives",
        "Transaction*",
        "listFile",
        "destination",
        "installFile",
        "DebFile",
        "file",
        "updateCache",
        "upgradeSystem",
        "QApt::UpgradeType",
        "upgradeType",
        "saveInstalledPackagesList",
        "path",
        "saveSelections",
        "loadSelections",
        "saveDownloadList",
        "setPackagePinned",
        "QApt::Package*",
        "package",
        "pin",
        "updateXapianIndex",
        "addArchiveToCache",
        "archive",
        "setFrontendCaps",
        "QApt::FrontendCaps",
        "caps",
        "emitPackageChanged",
        "emitXapianUpdateFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'packageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cacheReloadStarted'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cacheReloadFinished'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xapianUpdateStarted'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xapianUpdateFinished'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xapianUpdateProgress'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'transactionQueueChanged'
        QtMocHelpers::SignalData<void(QString, QStringList)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { QMetaType::QStringList, 11 },
        }}),
        // Slot 'setUndoRedoCacheSize'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'saveCacheState'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'restoreCacheState'
        QtMocHelpers::SlotData<void(const CacheState &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markPackagesForUpgrade'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markPackagesForDistUpgrade'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markPackagesForAutoRemove'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'markPackageForInstall'
        QtMocHelpers::SlotData<void(const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 24 },
        }}),
        // Slot 'markPackageForRemoval'
        QtMocHelpers::SlotData<void(const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 24 },
        }}),
        // Slot 'markPackages'
        QtMocHelpers::SlotData<void(const QApt::PackageList &, QApt::Package::State)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 }, { 0x80000000 | 29, 30 },
        }}),
        // Slot 'setCompressEvents'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 32 },
        }}),
        // Slot 'commitChanges'
        QtMocHelpers::SlotData<QApt::Transaction *()>(33, 2, QMC::AccessPublic, 0x80000000 | 34),
        // Slot 'installPackages'
        QtMocHelpers::SlotData<QApt::Transaction *(QApt::PackageList)>(35, 2, QMC::AccessPublic, 0x80000000 | 34, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'removePackages'
        QtMocHelpers::SlotData<QApt::Transaction *(QApt::PackageList)>(36, 2, QMC::AccessPublic, 0x80000000 | 34, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'downloadArchives'
        QtMocHelpers::SlotData<Transaction *(const QString &, const QString &)>(37, 2, QMC::AccessPublic, 0x80000000 | 38, {{
            { QMetaType::QString, 39 }, { QMetaType::QString, 40 },
        }}),
        // Slot 'installFile'
        QtMocHelpers::SlotData<Transaction *(const DebFile &)>(41, 2, QMC::AccessPublic, 0x80000000 | 38, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'updateCache'
        QtMocHelpers::SlotData<Transaction *()>(44, 2, QMC::AccessPublic, 0x80000000 | 38),
        // Slot 'upgradeSystem'
        QtMocHelpers::SlotData<Transaction *(QApt::UpgradeType)>(45, 2, QMC::AccessPublic, 0x80000000 | 38, {{
            { 0x80000000 | 46, 47 },
        }}),
        // Slot 'saveInstalledPackagesList'
        QtMocHelpers::SlotData<bool(const QString &) const>(48, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'saveSelections'
        QtMocHelpers::SlotData<bool(const QString &) const>(50, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'loadSelections'
        QtMocHelpers::SlotData<bool(const QString &)>(51, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'saveDownloadList'
        QtMocHelpers::SlotData<bool(const QString &) const>(52, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 49 },
        }}),
        // Slot 'setPackagePinned'
        QtMocHelpers::SlotData<bool(QApt::Package *, bool)>(53, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 }, { QMetaType::Bool, 56 },
        }}),
        // Slot 'updateXapianIndex'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addArchiveToCache'
        QtMocHelpers::SlotData<bool(const DebFile &)>(58, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 42, 59 },
        }}),
        // Slot 'setFrontendCaps'
        QtMocHelpers::SlotData<void(QApt::FrontendCaps)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 61, 62 },
        }}),
        // Slot 'emitPackageChanged'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'emitXapianUpdateFinished'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Backend, qt_meta_tag_ZN4QApt7BackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QApt::Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QApt7BackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QApt7BackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QApt7BackendE_t>.metaTypes,
    nullptr
} };

void QApt::Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Backend *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->packageChanged(); break;
        case 1: _t->cacheReloadStarted(); break;
        case 2: _t->cacheReloadFinished(); break;
        case 3: _t->xapianUpdateStarted(); break;
        case 4: _t->xapianUpdateFinished(); break;
        case 5: _t->xapianUpdateProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->transactionQueueChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 7: _t->setUndoRedoCacheSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->saveCacheState(); break;
        case 9: _t->restoreCacheState((*reinterpret_cast<std::add_pointer_t<CacheState>>(_a[1]))); break;
        case 10: _t->undo(); break;
        case 11: _t->redo(); break;
        case 12: _t->markPackagesForUpgrade(); break;
        case 13: _t->markPackagesForDistUpgrade(); break;
        case 14: _t->markPackagesForAutoRemove(); break;
        case 15: _t->markPackageForInstall((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->markPackageForRemoval((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->markPackages((*reinterpret_cast<std::add_pointer_t<QApt::PackageList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QApt::Package::State>>(_a[2]))); break;
        case 18: _t->setCompressEvents((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: { QApt::Transaction* _r = _t->commitChanges();
            if (_a[0]) *reinterpret_cast<QApt::Transaction**>(_a[0]) = std::move(_r); }  break;
        case 20: { QApt::Transaction* _r = _t->installPackages((*reinterpret_cast<std::add_pointer_t<QApt::PackageList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QApt::Transaction**>(_a[0]) = std::move(_r); }  break;
        case 21: { QApt::Transaction* _r = _t->removePackages((*reinterpret_cast<std::add_pointer_t<QApt::PackageList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QApt::Transaction**>(_a[0]) = std::move(_r); }  break;
        case 22: { Transaction* _r = _t->downloadArchives((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<Transaction**>(_a[0]) = std::move(_r); }  break;
        case 23: { Transaction* _r = _t->installFile((*reinterpret_cast<std::add_pointer_t<DebFile>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Transaction**>(_a[0]) = std::move(_r); }  break;
        case 24: { Transaction* _r = _t->updateCache();
            if (_a[0]) *reinterpret_cast<Transaction**>(_a[0]) = std::move(_r); }  break;
        case 25: { Transaction* _r = _t->upgradeSystem((*reinterpret_cast<std::add_pointer_t<QApt::UpgradeType>>(_a[1])));
            if (_a[0]) *reinterpret_cast<Transaction**>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->saveInstalledPackagesList((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->saveSelections((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->loadSelections((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->saveDownloadList((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->setPackagePinned((*reinterpret_cast<std::add_pointer_t<QApt::Package*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->updateXapianIndex(); break;
        case 32: { bool _r = _t->addArchiveToCache((*reinterpret_cast<std::add_pointer_t<DebFile>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->setFrontendCaps((*reinterpret_cast<std::add_pointer_t<QApt::FrontendCaps>>(_a[1]))); break;
        case 34: _t->emitPackageChanged(); break;
        case 35: _t->emitXapianUpdateFinished(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::packageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::cacheReloadStarted, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::cacheReloadFinished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::xapianUpdateStarted, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::xapianUpdateFinished, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)(int )>(_a, &Backend::xapianUpdateProgress, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)(QString , QStringList )>(_a, &Backend::transactionQueueChanged, 6))
            return;
    }
}

const QMetaObject *QApt::Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QApt::Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QApt7BackendE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QApt::Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void QApt::Backend::packageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QApt::Backend::cacheReloadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QApt::Backend::cacheReloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QApt::Backend::xapianUpdateStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QApt::Backend::xapianUpdateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QApt::Backend::xapianUpdateProgress(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void QApt::Backend::transactionQueueChanged(QString _t1, QStringList _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}
QT_WARNING_POP
