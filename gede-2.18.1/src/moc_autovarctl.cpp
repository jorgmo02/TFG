/****************************************************************************
** Meta object code from reading C++ file 'autovarctl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "autovarctl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autovarctl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoVarCtl_t {
    QByteArrayData data[17];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoVarCtl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoVarCtl_t qt_meta_stringdata_AutoVarCtl = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AutoVarCtl"
QT_MOC_LITERAL(1, 11, 29), // "onAutoWidgetItemDoubleClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 59, 4), // "item"
QT_MOC_LITERAL(5, 64, 6), // "column"
QT_MOC_LITERAL(6, 71, 30), // "onAutoWidgetCurrentItemChanged"
QT_MOC_LITERAL(7, 102, 7), // "current"
QT_MOC_LITERAL(8, 110, 24), // "onAutoWidgetItemExpanded"
QT_MOC_LITERAL(9, 135, 25), // "onAutoWidgetItemCollapsed"
QT_MOC_LITERAL(10, 161, 13), // "onContextMenu"
QT_MOC_LITERAL(11, 175, 3), // "pos"
QT_MOC_LITERAL(12, 179, 12), // "onShowMemory"
QT_MOC_LITERAL(13, 192, 14), // "onDisplayAsDec"
QT_MOC_LITERAL(14, 207, 14), // "onDisplayAsHex"
QT_MOC_LITERAL(15, 222, 14), // "onDisplayAsBin"
QT_MOC_LITERAL(16, 237, 15) // "onDisplayAsChar"

    },
    "AutoVarCtl\0onAutoWidgetItemDoubleClicked\0"
    "\0QTreeWidgetItem*\0item\0column\0"
    "onAutoWidgetCurrentItemChanged\0current\0"
    "onAutoWidgetItemExpanded\0"
    "onAutoWidgetItemCollapsed\0onContextMenu\0"
    "pos\0onShowMemory\0onDisplayAsDec\0"
    "onDisplayAsHex\0onDisplayAsBin\0"
    "onDisplayAsChar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoVarCtl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       6,    2,   69,    2, 0x0a /* Public */,
       8,    1,   74,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      10,    1,   80,    2, 0x0a /* Public */,
      12,    0,   83,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x0a /* Public */,
      14,    0,   85,    2, 0x0a /* Public */,
      15,    0,   86,    2, 0x0a /* Public */,
      16,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    7,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoVarCtl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoVarCtl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAutoWidgetItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onAutoWidgetCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onAutoWidgetItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->onAutoWidgetItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->onShowMemory(); break;
        case 6: _t->onDisplayAsDec(); break;
        case 7: _t->onDisplayAsHex(); break;
        case 8: _t->onDisplayAsBin(); break;
        case 9: _t->onDisplayAsChar(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutoVarCtl::staticMetaObject = { {
    &VarCtl::staticMetaObject,
    qt_meta_stringdata_AutoVarCtl.data,
    qt_meta_data_AutoVarCtl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoVarCtl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoVarCtl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoVarCtl.stringdata0))
        return static_cast<void*>(this);
    return VarCtl::qt_metacast(_clname);
}

int AutoVarCtl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VarCtl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
