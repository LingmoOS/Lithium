/****************************************************************************
** Meta object code from reading C++ file 'transactioninterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "transactioninterface_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactioninterface_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKubuntuQaptworker6TransactionInterface::qt_create_metaobjectdata<qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKubuntuQaptworker6TransactionInterface",
        "configFileConflict",
        "",
        "currentPath",
        "newPath",
        "finished",
        "exitStatus",
        "mediumRequired",
        "label",
        "mountPoint",
        "promptUntrusted",
        "untrustedPackages",
        "propertyChanged",
        "role",
        "QDBusVariant",
        "newValue",
        "cancel",
        "QDBusPendingReply<>",
        "provideMedium",
        "medium",
        "replyUntrustedPrompt",
        "approved",
        "resolveConfigFileConflict",
        "replace",
        "run",
        "setFrontendCaps",
        "caps",
        "setProperty",
        "property",
        "value",
        "debconfPipe",
        "downloadETA",
        "downloadProgress",
        "QApt::DownloadProgress",
        "downloadSpeed",
        "error",
        "errorDetails",
        "filePath",
        "frontendCaps",
        "isCancellable",
        "isCancelled",
        "isPaused",
        "locale",
        "packages",
        "QVariantMap",
        "progress",
        "proxy",
        "status",
        "statusDetails",
        "transactionId",
        "userId"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configFileConflict'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'mediumRequired'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { QMetaType::QString, 9 },
        }}),
        // Signal 'promptUntrusted'
        QtMocHelpers::SignalData<void(const QStringList &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 11 },
        }}),
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(int, const QDBusVariant &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { 0x80000000 | 14, 15 },
        }}),
        // Slot 'cancel'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(16, 2, QMC::AccessPublic, 0x80000000 | 17),
        // Slot 'provideMedium'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(18, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'replyUntrustedPrompt'
        QtMocHelpers::SlotData<QDBusPendingReply<>(bool)>(20, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'resolveConfigFileConflict'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &, bool)>(22, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { QMetaType::QString, 3 }, { QMetaType::Bool, 23 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(24, 2, QMC::AccessPublic, 0x80000000 | 17),
        // Slot 'setFrontendCaps'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int)>(25, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'setProperty'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int, const QDBusVariant &)>(27, 2, QMC::AccessPublic, 0x80000000 | 17, {{
            { QMetaType::Int, 28 }, { 0x80000000 | 14, 29 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'debconfPipe'
        QtMocHelpers::PropertyData<QString>(30, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'downloadETA'
        QtMocHelpers::PropertyData<qulonglong>(31, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'downloadProgress'
        QtMocHelpers::PropertyData<QApt::DownloadProgress>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'downloadSpeed'
        QtMocHelpers::PropertyData<qulonglong>(34, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'error'
        QtMocHelpers::PropertyData<int>(35, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'errorDetails'
        QtMocHelpers::PropertyData<QString>(36, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'exitStatus'
        QtMocHelpers::PropertyData<int>(6, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'filePath'
        QtMocHelpers::PropertyData<QString>(37, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'frontendCaps'
        QtMocHelpers::PropertyData<int>(38, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'isCancellable'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isCancelled'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isPaused'
        QtMocHelpers::PropertyData<bool>(41, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'locale'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'packages'
        QtMocHelpers::PropertyData<QVariantMap>(43, 0x80000000 | 44, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'progress'
        QtMocHelpers::PropertyData<int>(45, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'proxy'
        QtMocHelpers::PropertyData<QString>(46, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'role'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'status'
        QtMocHelpers::PropertyData<int>(47, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'statusDetails'
        QtMocHelpers::PropertyData<QString>(48, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'transactionId'
        QtMocHelpers::PropertyData<QString>(49, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'untrustedPackages'
        QtMocHelpers::PropertyData<QStringList>(11, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKubuntuQaptworker6TransactionInterface, qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKubuntuQaptworker6TransactionInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKubuntuQaptworker6TransactionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKubuntuQaptworker6TransactionInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->finished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mediumRequired((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->promptUntrusted((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: _t->propertyChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2]))); break;
        case 5: { QDBusPendingReply<> _r = _t->cancel();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<> _r = _t->provideMedium((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->replyUntrustedPrompt((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<> _r = _t->resolveConfigFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->run();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<> _r = _t->setFrontendCaps((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 11: { QDBusPendingReply<> _r = _t->setProperty((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKubuntuQaptworker6TransactionInterface::*)(const QString & , const QString & )>(_a, &OrgKubuntuQaptworker6TransactionInterface::configFileConflict, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKubuntuQaptworker6TransactionInterface::*)(int )>(_a, &OrgKubuntuQaptworker6TransactionInterface::finished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKubuntuQaptworker6TransactionInterface::*)(const QString & , const QString & )>(_a, &OrgKubuntuQaptworker6TransactionInterface::mediumRequired, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKubuntuQaptworker6TransactionInterface::*)(const QStringList & )>(_a, &OrgKubuntuQaptworker6TransactionInterface::promptUntrusted, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKubuntuQaptworker6TransactionInterface::*)(int , const QDBusVariant & )>(_a, &OrgKubuntuQaptworker6TransactionInterface::propertyChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->debconfPipe(); break;
        case 1: *reinterpret_cast<qulonglong*>(_v) = _t->downloadETA(); break;
        case 2: *reinterpret_cast<QApt::DownloadProgress*>(_v) = _t->downloadProgress(); break;
        case 3: *reinterpret_cast<qulonglong*>(_v) = _t->downloadSpeed(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->error(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->errorDetails(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->exitStatus(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->filePath(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->frontendCaps(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isCancellable(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isCancelled(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isPaused(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->locale(); break;
        case 13: *reinterpret_cast<QVariantMap*>(_v) = _t->packages(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->progress(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->proxy(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->role(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->status(); break;
        case 18: *reinterpret_cast<QString*>(_v) = _t->statusDetails(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->transactionId(); break;
        case 20: *reinterpret_cast<QStringList*>(_v) = _t->untrustedPackages(); break;
        case 21: *reinterpret_cast<int*>(_v) = _t->userId(); break;
        default: break;
        }
    }
}

const QMetaObject *OrgKubuntuQaptworker6TransactionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKubuntuQaptworker6TransactionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN41OrgKubuntuQaptworker6TransactionInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKubuntuQaptworker6TransactionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
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
void OrgKubuntuQaptworker6TransactionInterface::configFileConflict(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OrgKubuntuQaptworker6TransactionInterface::finished(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void OrgKubuntuQaptworker6TransactionInterface::mediumRequired(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void OrgKubuntuQaptworker6TransactionInterface::promptUntrusted(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void OrgKubuntuQaptworker6TransactionInterface::propertyChanged(int _t1, const QDBusVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
