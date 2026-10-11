/****************************************************************************
** Meta object code from reading C++ file 'decoration.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/decoration/decoration.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decoration.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6Lingmo10DecorationE_t {};
} // unnamed namespace

template <> constexpr inline auto Lingmo::Decoration::qt_create_metaobjectdata<qt_meta_tag_ZN6Lingmo10DecorationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Lingmo::Decoration",
        "init",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'init'
        QtMocHelpers::SlotData<bool()>(1, 2, QMC::AccessPublic, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Decoration, qt_meta_tag_ZN6Lingmo10DecorationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Lingmo::Decoration::staticMetaObject = { {
    QMetaObject::SuperData::link<KDecoration3::Decoration::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Lingmo10DecorationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Lingmo10DecorationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6Lingmo10DecorationE_t>.metaTypes,
    nullptr
} };

void Lingmo::Decoration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Decoration *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->init();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Lingmo::Decoration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lingmo::Decoration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Lingmo10DecorationE_t>.strings))
        return static_cast<void*>(this);
    return KDecoration3::Decoration::qt_metacast(_clname);
}

int Lingmo::Decoration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDecoration3::Decoration::qt_metacall(_c, _id, _a);
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
