/****************************************************************************
** Meta object code from reading C++ file 'transaction.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/worker/transaction.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transaction.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11TransactionE_t {};
} // unnamed namespace

template <> constexpr inline auto Transaction::qt_create_metaobjectdata<qt_meta_tag_ZN11TransactionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Transaction",
        "D-Bus Interface",
        "org.kubuntu.qaptworker.transaction",
        "propertyChanged",
        "",
        "role",
        "QDBusVariant",
        "newValue",
        "finished",
        "exitStatus",
        "mediumRequired",
        "label",
        "mountPoint",
        "promptUntrusted",
        "untrustedPackages",
        "configFileConflict",
        "currentPath",
        "newPath",
        "idleTimeout",
        "Transaction*",
        "trans",
        "setProperty",
        "property",
        "value",
        "run",
        "cancel",
        "provideMedium",
        "medium",
        "replyUntrustedPrompt",
        "approved",
        "resolveConfigFileConflict",
        "replaceFile",
        "emitIdleTimeout",
        "transactionId",
        "userId",
        "status",
        "error",
        "locale",
        "proxy",
        "debconfPipe",
        "packages",
        "QVariantMap",
        "isCancellable",
        "isCancelled",
        "isPaused",
        "statusDetails",
        "progress",
        "downloadProgress",
        "QApt::DownloadProgress",
        "downloadSpeed",
        "downloadETA",
        "filePath",
        "errorDetails",
        "frontendCaps"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(int, QDBusVariant)>(3, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void(int)>(8, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'mediumRequired'
        QtMocHelpers::SignalData<void(QString, QString)>(10, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Signal 'promptUntrusted'
        QtMocHelpers::SignalData<void(QStringList)>(13, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Signal 'configFileConflict'
        QtMocHelpers::SignalData<void(QString, QString)>(15, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 16 }, { QMetaType::QString, 17 },
        }}),
        // Signal 'idleTimeout'
        QtMocHelpers::SignalData<void(Transaction *)>(18, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'setProperty'
        QtMocHelpers::SlotData<void(int, QDBusVariant)>(21, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 }, { 0x80000000 | 6, 23 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(24, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(25, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'provideMedium'
        QtMocHelpers::SlotData<void(const QString &)>(26, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'replyUntrustedPrompt'
        QtMocHelpers::SlotData<void(bool)>(28, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'resolveConfigFileConflict'
        QtMocHelpers::SlotData<void(const QString &, bool)>(30, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 }, { QMetaType::Bool, 31 },
        }}),
        // Slot 'emitIdleTimeout'
        QtMocHelpers::SlotData<void()>(32, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'transactionId'
        QtMocHelpers::PropertyData<QString>(33, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'userId'
        QtMocHelpers::PropertyData<int>(34, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'role'
        QtMocHelpers::PropertyData<int>(5, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'status'
        QtMocHelpers::PropertyData<int>(35, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'error'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'locale'
        QtMocHelpers::PropertyData<QString>(37, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'proxy'
        QtMocHelpers::PropertyData<QString>(38, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'debconfPipe'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'packages'
        QtMocHelpers::PropertyData<QVariantMap>(40, 0x80000000 | 41, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'isCancellable'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isCancelled'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'exitStatus'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'isPaused'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'statusDetails'
        QtMocHelpers::PropertyData<QString>(45, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'progress'
        QtMocHelpers::PropertyData<int>(46, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'downloadProgress'
        QtMocHelpers::PropertyData<QApt::DownloadProgress>(47, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'untrustedPackages'
        QtMocHelpers::PropertyData<QStringList>(14, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'downloadSpeed'
        QtMocHelpers::PropertyData<quint64>(49, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'downloadETA'
        QtMocHelpers::PropertyData<quint64>(50, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'filePath'
        QtMocHelpers::PropertyData<QString>(51, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'errorDetails'
        QtMocHelpers::PropertyData<QString>(52, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'frontendCaps'
        QtMocHelpers::PropertyData<int>(53, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Transaction, qt_meta_tag_ZN11TransactionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Transaction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TransactionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TransactionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11TransactionE_t>.metaTypes,
    nullptr
} };

void Transaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Transaction *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2]))); break;
        case 1: _t->finished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mediumRequired((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->promptUntrusted((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: _t->configFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->idleTimeout((*reinterpret_cast<std::add_pointer_t<Transaction*>>(_a[1]))); break;
        case 6: _t->setProperty((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2]))); break;
        case 7: _t->run(); break;
        case 8: _t->cancel(); break;
        case 9: _t->provideMedium((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->replyUntrustedPrompt((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->resolveConfigFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->emitIdleTimeout(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusVariant >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Transaction* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusVariant >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(int , QDBusVariant )>(_a, &Transaction::propertyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(int )>(_a, &Transaction::finished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QString , QString )>(_a, &Transaction::mediumRequired, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QStringList )>(_a, &Transaction::promptUntrusted, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(QString , QString )>(_a, &Transaction::configFileConflict, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Transaction::*)(Transaction * )>(_a, &Transaction::idleTimeout, 5))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QApt::DownloadProgress >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->transactionId(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->userId(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->role(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->error(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->locale(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->proxy(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->debconfPipe(); break;
        case 8: *reinterpret_cast<QVariantMap*>(_v) = _t->packages(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isCancellable(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isCancelled(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->exitStatus(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isPaused(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->statusDetails(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->progress(); break;
        case 15: *reinterpret_cast<QApt::DownloadProgress*>(_v) = _t->downloadProgress(); break;
        case 16: *reinterpret_cast<QStringList*>(_v) = _t->untrustedPackages(); break;
        case 17: *reinterpret_cast<quint64*>(_v) = _t->downloadSpeed(); break;
        case 18: *reinterpret_cast<quint64*>(_v) = _t->downloadETA(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->filePath(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->errorDetails(); break;
        case 21: *reinterpret_cast<int*>(_v) = _t->frontendCaps(); break;
        default: break;
        }
    }
}

const QMetaObject *Transaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Transaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11TransactionE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int Transaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void Transaction::propertyChanged(int _t1, QDBusVariant _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Transaction::finished(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Transaction::mediumRequired(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void Transaction::promptUntrusted(QStringList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Transaction::configFileConflict(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void Transaction::idleTimeout(Transaction * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
