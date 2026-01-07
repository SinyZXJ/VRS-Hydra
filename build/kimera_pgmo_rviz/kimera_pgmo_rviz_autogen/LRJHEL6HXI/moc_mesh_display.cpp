/****************************************************************************
** Meta object code from reading C++ file 'mesh_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/kimera_pgmo/kimera_pgmo_rviz/include/kimera_pgmo_rviz/mesh_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mesh_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_kimera_pgmo__MeshDisplay_t {
    QByteArrayData data[5];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_kimera_pgmo__MeshDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_kimera_pgmo__MeshDisplay_t qt_meta_stringdata_kimera_pgmo__MeshDisplay = {
    {
QT_MOC_LITERAL(0, 0, 24), // "kimera_pgmo::MeshDisplay"
QT_MOC_LITERAL(1, 25, 24), // "updateGlobalSettingsSlot"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "visibleSlot"
QT_MOC_LITERAL(4, 63, 23) // "toggleVisibilityAllSloT"

    },
    "kimera_pgmo::MeshDisplay\0"
    "updateGlobalSettingsSlot\0\0visibleSlot\0"
    "toggleVisibilityAllSloT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kimera_pgmo__MeshDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void kimera_pgmo::MeshDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeshDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGlobalSettingsSlot(); break;
        case 1: _t->visibleSlot(); break;
        case 2: _t->toggleVisibilityAllSloT(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject kimera_pgmo::MeshDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::MessageFilterDisplay<MeshMsg>::staticMetaObject>(),
    qt_meta_stringdata_kimera_pgmo__MeshDisplay.data,
    qt_meta_data_kimera_pgmo__MeshDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *kimera_pgmo::MeshDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kimera_pgmo::MeshDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_kimera_pgmo__MeshDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::MessageFilterDisplay<MeshMsg>::qt_metacast(_clname);
}

int kimera_pgmo::MeshDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::MessageFilterDisplay<MeshMsg>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
