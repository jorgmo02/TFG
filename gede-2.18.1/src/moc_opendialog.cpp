/****************************************************************************
** Meta object code from reading C++ file 'opendialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "opendialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opendialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenDialog_t {
    QByteArrayData data[12];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenDialog_t qt_meta_stringdata_OpenDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OpenDialog"
QT_MOC_LITERAL(1, 11, 21), // "onConnectionTypeLocal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "checked"
QT_MOC_LITERAL(4, 42, 19), // "onConnectionTypeTcp"
QT_MOC_LITERAL(5, 62, 24), // "onConnectionTypeCoreDump"
QT_MOC_LITERAL(6, 87, 19), // "onConnectionTypePid"
QT_MOC_LITERAL(7, 107, 15), // "onSelectProgram"
QT_MOC_LITERAL(8, 123, 16), // "onSelectCoreFile"
QT_MOC_LITERAL(9, 140, 18), // "onSelectRunningPid"
QT_MOC_LITERAL(10, 159, 21), // "onProjDirComboChanged"
QT_MOC_LITERAL(11, 181, 3) // "idx"

    },
    "OpenDialog\0onConnectionTypeLocal\0\0"
    "checked\0onConnectionTypeTcp\0"
    "onConnectionTypeCoreDump\0onConnectionTypePid\0"
    "onSelectProgram\0onSelectCoreFile\0"
    "onSelectRunningPid\0onProjDirComboChanged\0"
    "idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void OpenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnectionTypeLocal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onConnectionTypeTcp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onConnectionTypeCoreDump((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onConnectionTypePid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onSelectProgram(); break;
        case 5: _t->onSelectCoreFile(); break;
        case 6: _t->onSelectRunningPid(); break;
        case 7: _t->onProjDirComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_OpenDialog.data,
    qt_meta_data_OpenDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OpenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
