/****************************************************************************
** Meta object code from reading C++ file 'transactionadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "transactionadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18TransactionAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto TransactionAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN18TransactionAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TransactionAdaptor",
        "D-Bus Interface",
        "org.kubuntu.qaptworker6.transaction",
        "D-Bus Introspection",
        "  <interface name=\"org.kubuntu.qaptworker6.transaction\">\n    <p"
        "roperty access=\"read\" type=\"s\" name=\"transactionId\"/>\n    <"
        "property access=\"read\" type=\"i\" name=\"userId\"/>\n    <proper"
        "ty access=\"read\" type=\"i\" name=\"role\"/>\n    <property acces"
        "s=\"read\" type=\"i\" name=\"status\"/>\n    <property access=\"re"
        "ad\" type=\"i\" name=\"error\"/>\n    <property access=\"read\" ty"
        "pe=\"s\" name=\"locale\"/>\n    <property access=\"read\" type=\"s"
        "\" name=\"proxy\"/>\n    <property access=\"read\" type=\"s\" name"
        "=\"debconfPipe\"/>\n    <property access=\"read\" type=\"a{sv}\" n"
        "ame=\"packages\">\n      <annotation value=\"QVariantMap\" name=\""
        "org.qtproject.QtDBus.QtTypeName\"/>\n    </property>\n    <propert"
        "y access=\"read\" type=\"b\" name=\"isCancellable\"/>\n    <proper"
        "ty access=\"read\" type=\"b\" name=\"isCancelled\"/>\n    <propert"
        "y access=\"read\" type=\"i\" name=\"exitStatus\"/>\n    <property "
        "access=\"read\" type=\"b\" name=\"isPaused\"/>\n    <property acce"
        "ss=\"read\" type=\"s\" name=\"statusDetails\"/>\n    <property acc"
        "ess=\"read\" type=\"i\" name=\"progress\"/>\n    <property access="
        "\"read\" type=\"(sistts)\" name=\"downloadProgress\">\n      <anno"
        "tation value=\"QApt::DownloadProgress\" name=\"org.qtproject.QtDBu"
        "s.QtTypeName\"/>\n    </property>\n    <property access=\"read\" t"
        "ype=\"as\" name=\"untrustedPackages\"/>\n    <property access=\"re"
        "ad\" type=\"t\" name=\"downloadSpeed\"/>\n    <property access=\"r"
        "ead\" type=\"t\" name=\"downloadETA\"/>\n    <property access=\"re"
        "ad\" type=\"s\" name=\"filePath\"/>\n    <property access=\"read\""
        " type=\"s\" name=\"errorDetails\"/>\n    <property access=\"read\""
        " type=\"i\" name=\"frontendCaps\"/>\n    <signal name=\"propertyCh"
        "anged\">\n      <arg direction=\"out\" type=\"i\" name=\"role\"/>\n"
        "      <arg direction=\"out\" type=\"v\" name=\"newValue\"/>\n    <"
        "/signal>\n    <signal name=\"finished\">\n      <arg direction=\"o"
        "ut\" type=\"i\" name=\"exitStatus\"/>\n    </signal>\n    <signal "
        "name=\"mediumRequired\">\n      <arg direction=\"out\" type=\"s\" "
        "name=\"label\"/>\n      <arg direction=\"out\" type=\"s\" name=\"m"
        "ountPoint\"/>\n    </signal>\n    <signal name=\"configFileConflic"
        "t\">\n      <arg direction=\"out\" type=\"s\" name=\"currentPath\""
        "/>\n      <arg direction=\"out\" type=\"s\" name=\"newPath\"/>\n  "
        "  </signal>\n    <signal name=\"promptUntrusted\">\n      <arg dir"
        "ection=\"out\" type=\"as\" name=\"untrustedPackages\"/>\n    </sig"
        "nal>\n    <method name=\"setProperty\">\n      <arg direction=\"in"
        "\" type=\"i\" name=\"property\"/>\n      <arg direction=\"in\" typ"
        "e=\"v\" name=\"value\"/>\n    </method>\n    <method name=\"run\"/"
        ">\n    <method name=\"cancel\"/>\n    <method name=\"provideMedium"
        "\">\n      <arg direction=\"in\" type=\"s\" name=\"medium\"/>\n   "
        " </method>\n    <method name=\"replyUntrustedPrompt\">\n      <arg"
        " direction=\"in\" type=\"b\" name=\"approved\"/>\n    </method>\n "
        "   <method name=\"resolveConfigFileConflict\">\n      <arg directi"
        "on=\"in\" type=\"s\" name=\"currentPath\"/>\n      <arg direction="
        "\"in\" type=\"b\" name=\"replace\"/>\n    </method>\n    <method n"
        "ame=\"setFrontendCaps\">\n      <arg direction=\"in\" type=\"i\" n"
        "ame=\"caps\"/>\n    </method>\n  </interface>\n",
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
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 8 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void(int)>(9, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'mediumRequired'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(11, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
        }}),
        // Signal 'promptUntrusted'
        QtMocHelpers::SignalData<void(const QStringList &)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 15 },
        }}),
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(int, const QDBusVariant &)>(16, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { 0x80000000 | 18, 19 },
        }}),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'provideMedium'
        QtMocHelpers::SlotData<void(const QString &)>(21, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'replyUntrustedPrompt'
        QtMocHelpers::SlotData<void(bool)>(23, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'resolveConfigFileConflict'
        QtMocHelpers::SlotData<void(const QString &, bool)>(25, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::Bool, 26 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(27, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setFrontendCaps'
        QtMocHelpers::SlotData<void(int)>(28, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'setProperty'
        QtMocHelpers::SlotData<void(int, const QDBusVariant &)>(30, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 }, { 0x80000000 | 18, 32 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'debconfPipe'
        QtMocHelpers::PropertyData<QString>(33, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'downloadETA'
        QtMocHelpers::PropertyData<qulonglong>(34, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'downloadProgress'
        QtMocHelpers::PropertyData<QApt::DownloadProgress>(35, 0x80000000 | 36, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'downloadSpeed'
        QtMocHelpers::PropertyData<qulonglong>(37, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'error'
        QtMocHelpers::PropertyData<int>(38, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'errorDetails'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'exitStatus'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'filePath'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'frontendCaps'
        QtMocHelpers::PropertyData<int>(41, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'isCancellable'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isCancelled'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isPaused'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'locale'
        QtMocHelpers::PropertyData<QString>(45, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'packages'
        QtMocHelpers::PropertyData<QVariantMap>(46, 0x80000000 | 47, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'progress'
        QtMocHelpers::PropertyData<int>(48, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'proxy'
        QtMocHelpers::PropertyData<QString>(49, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'role'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'status'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'statusDetails'
        QtMocHelpers::PropertyData<QString>(51, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'transactionId'
        QtMocHelpers::PropertyData<QString>(52, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'untrustedPackages'
        QtMocHelpers::PropertyData<QStringList>(15, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<int>(53, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<TransactionAdaptor, qt_meta_tag_ZN18TransactionAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject TransactionAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18TransactionAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18TransactionAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18TransactionAdaptorE_t>.metaTypes,
    nullptr
} };

void TransactionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TransactionAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->finished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mediumRequired((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->promptUntrusted((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: _t->propertyChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2]))); break;
        case 5: _t->cancel(); break;
        case 6: _t->provideMedium((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->replyUntrustedPrompt((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->resolveConfigFileConflict((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->run(); break;
        case 10: _t->setFrontendCaps((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setProperty((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TransactionAdaptor::*)(const QString & , const QString & )>(_a, &TransactionAdaptor::configFileConflict, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TransactionAdaptor::*)(int )>(_a, &TransactionAdaptor::finished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TransactionAdaptor::*)(const QString & , const QString & )>(_a, &TransactionAdaptor::mediumRequired, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TransactionAdaptor::*)(const QStringList & )>(_a, &TransactionAdaptor::promptUntrusted, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TransactionAdaptor::*)(int , const QDBusVariant & )>(_a, &TransactionAdaptor::propertyChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QApt::DownloadProgress >(); break;
        }
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

const QMetaObject *TransactionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18TransactionAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int TransactionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void TransactionAdaptor::configFileConflict(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void TransactionAdaptor::finished(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TransactionAdaptor::mediumRequired(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void TransactionAdaptor::promptUntrusted(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void TransactionAdaptor::propertyChanged(int _t1, const QDBusVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
