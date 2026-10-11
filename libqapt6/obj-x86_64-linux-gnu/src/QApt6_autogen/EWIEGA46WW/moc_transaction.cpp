/****************************************************************************
** Meta object code from reading C++ file 'transaction.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/transaction.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transaction.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QApt11TransactionE_t {};
} // unnamed namespace

template <> constexpr inline auto QApt::Transaction::qt_create_metaobjectdata<qt_meta_tag_ZN4QApt11TransactionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QApt::Transaction",
        "errorOccurred",
        "",
        "QApt::ErrorCode",
        "error",
        "statusChanged",
        "QApt::TransactionStatus",
        "status",
        "cancellableChanged",
        "cancellable",
        "paused",
        "resumed",
        "statusDetailsChanged",
        "statusDetails",
        "progressChanged",
        "progress",
        "downloadProgressChanged",
        "QApt::DownloadProgress",
        "finished",
        "QApt::ExitStatus",
        "exitStatus",
        "mediumRequired",
        "label",
        "mountPoint",
        "promptUntrusted",
        "untrustedPackages",
        "configFileConflict",
        "currentPath",
        "newPath",
        "downloadSpeedChanged",
        "downloadSpeed",
        "downloadETAChanged",
        "ETA",
        "setLocale",
        "locale",
        "setProxy",
        "proxy",
        "setDebconfPipe",
        "pipe",
        "setFrontendCaps",
        "QApt::FrontendCaps",
        "frontendCaps",
        "run",
        "cancel",
        "provideMedium",
        "medium",
        "replyUntrustedPrompt",
        "approved",
        "resolveConfigFileConflict",
        "replace",
        "sync",
        "updateProperty",
        "type",
        "QDBusVariant",
        "variant",
        "onCallFinished",
        "QDBusPendingCallWatcher*",
        "watcher",
        "serviceOwnerChanged",
        "name",
        "oldOwner",
        "newOwner",
        "emitFinished",
        "transactionId",
        "userId",
        "role",
        "TransactionRole",
        "TransactionStatus",
        "ErrorCode",
        "debconfPipe",
        "packages",
        "QVariantMap",
        "isCancellable",
        "isCancelled",
        "ExitStatus",
        "isPaused",
        "downloadProgress",
        "DownloadProgress",
        "downloadETA",
        "filePath",
        "errorDetails",
        "FrontendCaps"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(QApt::ErrorCode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void(QApt::TransactionStatus)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'cancellableChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'paused'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resumed'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusDetailsChanged'
        QtMocHelpers::SignalData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'progressChanged'
        QtMocHelpers::SignalData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Signal 'downloadProgressChanged'
        QtMocHelpers::SignalData<void(QApt::DownloadProgress)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 15 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void(QApt::ExitStatus)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'mediumRequired'
        QtMocHelpers::SignalData<void(QString, QString)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 22 }, { QMetaType::QString, 23 },
        }}),
        // Signal 'promptUntrusted'
        QtMocHelpers::SignalData<void(QStringList)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 25 },
        }}),
        // Signal 'configFileConflict'
        QtMocHelpers::SignalData<void(QString, QString)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 }, { QMetaType::QString, 28 },
        }}),
        // Signal 'downloadSpeedChanged'
        QtMocHelpers::SignalData<void(quint64)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 30 },
        }}),
        // Signal 'downloadETAChanged'
        QtMocHelpers::SignalData<void(quint64)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 32 },
        }}),
        // Slot 'setLocale'
        QtMocHelpers::SlotData<void(const QString &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 34 },
        }}),
        // Slot 'setProxy'
        QtMocHelpers::SlotData<void(const QString &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 36 },
        }}),
        // Slot 'setDebconfPipe'
        QtMocHelpers::SlotData<void(const QString &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Slot 'setFrontendCaps'
        QtMocHelpers::SlotData<void(QApt::FrontendCaps)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'provideMedium'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 45 },
        }}),
        // Slot 'replyUntrustedPrompt'
        QtMocHelpers::SlotData<void(bool)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 47 },
        }}),
        // Slot 'resolveConfigFileConflict'
        QtMocHelpers::SlotData<void(const QString &, bool)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 }, { QMetaType::Bool, 49 },
        }}),
        // Slot 'sync'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateProperty'
        QtMocHelpers::SlotData<void(int, const QDBusVariant &)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 52 }, { 0x80000000 | 53, 54 },
        }}),
        // Slot 'onCallFinished'
        QtMocHelpers::SlotData<void(QDBusPendingCallWatcher *)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 56, 57 },
        }}),
        // Slot 'serviceOwnerChanged'
        QtMocHelpers::SlotData<void(QString, QString, QString)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 59 }, { QMetaType::QString, 60 }, { QMetaType::QString, 61 },
        }}),
        // Slot 'emitFinished'
        QtMocHelpers::SlotData<void(int)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'transactionId'
        QtMocHelpers::PropertyData<QString>(63, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'userId'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'role'
        QtMocHelpers::PropertyData<TransactionRole>(65, 0x80000000 | 66, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'status'
        QtMocHelpers::PropertyData<TransactionStatus>(7, 0x80000000 | 67, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'error'
        QtMocHelpers::PropertyData<ErrorCode>(4, 0x80000000 | 68, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'locale'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'proxy'
        QtMocHelpers::PropertyData<QString>(36, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'debconfPipe'
        QtMocHelpers::PropertyData<QString>(69, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'packages'
        QtMocHelpers::PropertyData<QVariantMap>(70, 0x80000000 | 71, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'isCancellable'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'isCancelled'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'exitStatus'
        QtMocHelpers::PropertyData<ExitStatus>(20, 0x80000000 | 74, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'isPaused'
        QtMocHelpers::PropertyData<bool>(75, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'statusDetails'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'progress'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'downloadProgress'
        QtMocHelpers::PropertyData<DownloadProgress>(76, 0x80000000 | 77, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'untrustedPackages'
        QtMocHelpers::PropertyData<QStringList>(25, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'downloadSpeed'
        QtMocHelpers::PropertyData<quint64>(30, QMetaType::ULongLong, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'downloadETA'
        QtMocHelpers::PropertyData<quint64>(78, QMetaType::ULongLong, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'filePath'
        QtMocHelpers::PropertyData<QString>(79, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'errorDetails'
        QtMocHelpers::PropertyData<QString>(80, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'frontendCaps'
        QtMocHelpers::PropertyData<FrontendCaps>(41, 0x80000000 | 81, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Transaction, qt_meta_tag_ZN4QApt11TransactionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QApt::Transaction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QApt11TransactionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QApt11TransactionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QApt11TransactionE_t>.metaTypes,
    nullptr
} };

void QApt::Transaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Transaction *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->errorOccurred((*reinterpret_cast<std::add_pointer_t<QApt::ErrorCode>>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<QApt::TransactionStatus>>(_a[1]))); break;
        case 2: _t->cancellableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->paused(); break;
        case 4: _t->resumed(); break;
        case 5: _t->statusDetailsChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->progressChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->downloadProgressChanged((*reinterpret_cast<std::add_pointer_t<QApt::DownloadProgress>>(_a[1]))); break;
        case 8: _t->finished((*reinterpret_cast<std::add_pointer_t<QApt::ExitStatus>>(_a[1]))); break;
        case 9: _t->mediumRequired((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->promptUntrusted((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 11: _t->configFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->downloadSpeedChanged((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1]))); break;
        case 13: _t->downloadETAChanged((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1]))); break;
        case 14: _t->setLocale((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->setProxy((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->setDebconfPipe((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->setFrontendCaps((*reinterpret_cast<std::add_pointer_t<QApt::FrontendCaps>>(_a[1]))); break;
        case 18: _t->run(); break;
        case 19: _t->cancel(); break;
        case 20: _t->provideMedium((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->replyUntrustedPrompt((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->resolveConfigFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 23: _t->sync(); break;
        case 24: _t->updateProperty((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2]))); break;
        case 25: _t->onCallFinished((*reinterpret_cast<std::add_pointer_t<QDBusPendingCallWatcher*>>(_a[1]))); break;
        case 26: _t->serviceOwnerChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 27: _t->emitFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QApt::DownloadProgress >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QApt::ErrorCode )>(_a, &Transaction::errorOccurred, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QApt::TransactionStatus )>(_a, &Transaction::statusChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(bool )>(_a, &Transaction::cancellableChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)()>(_a, &Transaction::paused, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)()>(_a, &Transaction::resumed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(const QString & )>(_a, &Transaction::statusDetailsChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(int )>(_a, &Transaction::progressChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QApt::DownloadProgress )>(_a, &Transaction::downloadProgressChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QApt::ExitStatus )>(_a, &Transaction::finished, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QString , QString )>(_a, &Transaction::mediumRequired, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QStringList )>(_a, &Transaction::promptUntrusted, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QString , QString )>(_a, &Transaction::configFileConflict, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(quint64 )>(_a, &Transaction::downloadSpeedChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(quint64 )>(_a, &Transaction::downloadETAChanged, 13))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->transactionId(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->userId(); break;
        case 2: *reinterpret_cast<TransactionRole*>(_v) = _t->role(); break;
        case 3: *reinterpret_cast<TransactionStatus*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<ErrorCode*>(_v) = _t->error(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->locale(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->proxy(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->debconfPipe(); break;
        case 8: *reinterpret_cast<QVariantMap*>(_v) = _t->packages(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isCancellable(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isCancelled(); break;
        case 11: *reinterpret_cast<ExitStatus*>(_v) = _t->exitStatus(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isPaused(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->statusDetails(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->progress(); break;
        case 15: *reinterpret_cast<DownloadProgress*>(_v) = _t->downloadProgress(); break;
        case 16: *reinterpret_cast<QStringList*>(_v) = _t->untrustedPackages(); break;
        case 17: *reinterpret_cast<quint64*>(_v) = _t->downloadSpeed(); break;
        case 18: *reinterpret_cast<quint64*>(_v) = _t->downloadETA(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->filePath(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->errorDetails(); break;
        case 21: *reinterpret_cast<FrontendCaps*>(_v) = _t->frontendCaps(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->updateTransactionId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->updateUserId(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->updateRole(*reinterpret_cast<TransactionRole*>(_v)); break;
        case 3: _t->updateStatus(*reinterpret_cast<TransactionStatus*>(_v)); break;
        case 5: _t->updateLocale(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->updateProxy(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->updateDebconfPipe(*reinterpret_cast<QString*>(_v)); break;
        case 8: _t->updatePackages(*reinterpret_cast<QVariantMap*>(_v)); break;
        case 9: _t->updateCancellable(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->updateCancelled(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->updateExitStatus(*reinterpret_cast<ExitStatus*>(_v)); break;
        case 12: _t->updatePaused(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->updateStatusDetails(*reinterpret_cast<QString*>(_v)); break;
        case 14: _t->updateProgress(*reinterpret_cast<int*>(_v)); break;
        case 15: _t->updateDownloadProgress(*reinterpret_cast<DownloadProgress*>(_v)); break;
        case 16: _t->updateUntrustedPackages(*reinterpret_cast<QStringList*>(_v)); break;
        case 17: _t->updateDownloadSpeed(*reinterpret_cast<quint64*>(_v)); break;
        case 18: _t->updateDownloadETA(*reinterpret_cast<quint64*>(_v)); break;
        case 19: _t->updateFilePath(*reinterpret_cast<QString*>(_v)); break;
        case 20: _t->updateErrorDetails(*reinterpret_cast<QString*>(_v)); break;
        case 21: _t->updateFrontendCaps(*reinterpret_cast<FrontendCaps*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QApt::Transaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QApt::Transaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QApt11TransactionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QApt::Transaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QApt::Transaction::errorOccurred(QApt::ErrorCode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QApt::Transaction::statusChanged(QApt::TransactionStatus _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QApt::Transaction::cancellableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QApt::Transaction::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QApt::Transaction::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QApt::Transaction::statusDetailsChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void QApt::Transaction::progressChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void QApt::Transaction::downloadProgressChanged(QApt::DownloadProgress _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void QApt::Transaction::finished(QApt::ExitStatus _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void QApt::Transaction::mediumRequired(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void QApt::Transaction::promptUntrusted(QStringList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void QApt::Transaction::configFileConflict(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}

// SIGNAL 12
void QApt::Transaction::downloadSpeedChanged(quint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void QApt::Transaction::downloadETAChanged(quint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}
QT_WARNING_POP
