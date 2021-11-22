/****************************************************************************
** Meta object code from reading C++ file 'watchvarctl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "watchvarctl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watchvarctl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WatchVarCtl_t {
    QByteArrayData data[17];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchVarCtl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchVarCtl_t qt_meta_stringdata_WatchVarCtl = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WatchVarCtl"
QT_MOC_LITERAL(1, 12, 30), // "onWatchWidgetItemDoubleClicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 61, 4), // "item"
QT_MOC_LITERAL(5, 66, 6), // "column"
QT_MOC_LITERAL(6, 73, 31), // "onWatchWidgetCurrentItemChanged"
QT_MOC_LITERAL(7, 105, 7), // "current"
QT_MOC_LITERAL(8, 113, 25), // "onWatchWidgetItemExpanded"
QT_MOC_LITERAL(9, 139, 26), // "onWatchWidgetItemCollapsed"
QT_MOC_LITERAL(10, 166, 13), // "onContextMenu"
QT_MOC_LITERAL(11, 180, 3), // "pos"
QT_MOC_LITERAL(12, 184, 14), // "onDisplayAsDec"
QT_MOC_LITERAL(13, 199, 14), // "onDisplayAsHex"
QT_MOC_LITERAL(14, 214, 14), // "onDisplayAsBin"
QT_MOC_LITERAL(15, 229, 15), // "onDisplayAsChar"
QT_MOC_LITERAL(16, 245, 13) // "onRemoveWatch"

    },
    "WatchVarCtl\0onWatchWidgetItemDoubleClicked\0"
    "\0QTreeWidgetItem*\0item\0column\0"
    "onWatchWidgetCurrentItemChanged\0current\0"
    "onWatchWidgetItemExpanded\0"
    "onWatchWidgetItemCollapsed\0onContextMenu\0"
    "pos\0onDisplayAsDec\0onDisplayAsHex\0"
    "onDisplayAsBin\0onDisplayAsChar\0"
    "onRemoveWatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchVarCtl[] = {

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

void WatchVarCtl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WatchVarCtl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onWatchWidgetItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onWatchWidgetCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onWatchWidgetItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->onWatchWidgetItemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->onDisplayAsDec(); break;
        case 6: _t->onDisplayAsHex(); break;
        case 7: _t->onDisplayAsBin(); break;
        case 8: _t->onDisplayAsChar(); break;
        case 9: _t->onRemoveWatch(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WatchVarCtl::staticMetaObject = { {
    &VarCtl::staticMetaObject,
    qt_meta_stringdata_WatchVarCtl.data,
    qt_meta_data_WatchVarCtl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchVarCtl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchVarCtl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchVarCtl.stringdata0))
        return static_cast<void*>(this);
    return VarCtl::qt_metacast(_clname);
}

int WatchVarCtl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
