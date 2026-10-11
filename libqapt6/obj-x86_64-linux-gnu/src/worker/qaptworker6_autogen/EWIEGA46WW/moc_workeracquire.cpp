/****************************************************************************
** Meta object code from reading C++ file 'workeracquire.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/worker/workeracquire.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workeracquire.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13WorkerAcquireE_t {};
} // unnamed namespace

template <> constexpr inline auto WorkerAcquire::qt_create_metaobjectdata<qt_meta_tag_ZN13WorkerAcquireE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WorkerAcquire",
        "updateStatus",
        "",
        "pkgAcquire::ItemDesc",
        "Itm"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateStatus'
        QtMocHelpers::SlotData<void(const pkgAcquire::ItemDesc &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WorkerAcquire, qt_meta_tag_ZN13WorkerAcquireE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WorkerAcquire::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WorkerAcquireE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WorkerAcquireE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13WorkerAcquireE_t>.metaTypes,
    nullptr
} };

void WorkerAcquire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkerAcquire *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateStatus((*reinterpret_cast<std::add_pointer_t<pkgAcquire::ItemDesc>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WorkerAcquire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerAcquire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WorkerAcquireE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "pkgAcquireStatus"))
        return static_cast< pkgAcquireStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int WorkerAcquire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
