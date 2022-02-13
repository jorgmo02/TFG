/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[75];
    char stringdata0[1389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "newInfoMsg"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "text"
QT_MOC_LITERAL(4, 28, 10), // "newWarnMsg"
QT_MOC_LITERAL(5, 39, 11), // "newErrorMsg"
QT_MOC_LITERAL(6, 51, 10), // "newCritMsg"
QT_MOC_LITERAL(7, 62, 24), // "onFuncFilter_textChanged"
QT_MOC_LITERAL(8, 87, 17), // "onFuncFilterClear"
QT_MOC_LITERAL(9, 105, 32), // "onFuncFilterCheckBoxStateChanged"
QT_MOC_LITERAL(10, 138, 5), // "state"
QT_MOC_LITERAL(11, 144, 33), // "onClassFilterCheckBoxStateCha..."
QT_MOC_LITERAL(12, 178, 18), // "onClassFilterClear"
QT_MOC_LITERAL(13, 197, 25), // "onClassFilter_textChanged"
QT_MOC_LITERAL(14, 223, 23), // "onIncSearch_textChanged"
QT_MOC_LITERAL(15, 247, 25), // "onFolderViewItemActivated"
QT_MOC_LITERAL(16, 273, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(17, 290, 4), // "item"
QT_MOC_LITERAL(18, 295, 6), // "column"
QT_MOC_LITERAL(19, 302, 30), // "onThreadWidgetSelectionChanged"
QT_MOC_LITERAL(20, 333, 29), // "onStackWidgetSelectionChanged"
QT_MOC_LITERAL(21, 363, 6), // "onQuit"
QT_MOC_LITERAL(22, 370, 6), // "onNext"
QT_MOC_LITERAL(23, 377, 8), // "onStepIn"
QT_MOC_LITERAL(24, 386, 9), // "onStepOut"
QT_MOC_LITERAL(25, 396, 7), // "onAbout"
QT_MOC_LITERAL(26, 404, 8), // "onSearch"
QT_MOC_LITERAL(27, 413, 28), // "onSearchCheckBoxStateChanged"
QT_MOC_LITERAL(28, 442, 12), // "onSearchNext"
QT_MOC_LITERAL(29, 455, 12), // "onSearchPrev"
QT_MOC_LITERAL(30, 468, 10), // "onGoToLine"
QT_MOC_LITERAL(31, 479, 10), // "onGoToMain"
QT_MOC_LITERAL(32, 490, 6), // "onStop"
QT_MOC_LITERAL(33, 497, 36), // "onBreakpointsWidgetItemDouble..."
QT_MOC_LITERAL(34, 534, 9), // "onRestart"
QT_MOC_LITERAL(35, 544, 10), // "onContinue"
QT_MOC_LITERAL(36, 555, 29), // "onCodeViewContextMenuAddWatch"
QT_MOC_LITERAL(37, 585, 29), // "onCodeViewContextMenuOpenFile"
QT_MOC_LITERAL(38, 615, 35), // "onCodeViewContextMenuShowDefi..."
QT_MOC_LITERAL(39, 651, 40), // "onCodeViewContextMenuShowCurr..."
QT_MOC_LITERAL(40, 692, 10), // "onSettings"
QT_MOC_LITERAL(41, 703, 37), // "onCodeViewContextMenuToggleBr..."
QT_MOC_LITERAL(42, 741, 31), // "onCodeViewTab_tabCloseRequested"
QT_MOC_LITERAL(43, 773, 5), // "index"
QT_MOC_LITERAL(44, 779, 28), // "onCodeViewTab_currentChanged"
QT_MOC_LITERAL(45, 808, 6), // "tabIdx"
QT_MOC_LITERAL(46, 815, 31), // "onCodeViewTab_launchContextMenu"
QT_MOC_LITERAL(47, 847, 29), // "onCodeViewTab_closeTabsToLeft"
QT_MOC_LITERAL(48, 877, 28), // "onCodeViewTab_closeOtherTabs"
QT_MOC_LITERAL(49, 906, 35), // "onCodeViewContextMenuJumpToLo..."
QT_MOC_LITERAL(50, 942, 11), // "onViewStack"
QT_MOC_LITERAL(51, 954, 17), // "onViewBreakpoints"
QT_MOC_LITERAL(52, 972, 13), // "onViewThreads"
QT_MOC_LITERAL(53, 986, 11), // "onViewWatch"
QT_MOC_LITERAL(54, 998, 19), // "onViewAutoVariables"
QT_MOC_LITERAL(55, 1018, 21), // "onViewCustomVariables"
QT_MOC_LITERAL(56, 1040, 18), // "onViewTargetOutput"
QT_MOC_LITERAL(57, 1059, 16), // "onViewGedeOutput"
QT_MOC_LITERAL(58, 1076, 15), // "onViewGdbOutput"
QT_MOC_LITERAL(59, 1092, 17), // "onViewFileBrowser"
QT_MOC_LITERAL(60, 1110, 16), // "onViewFuncFilter"
QT_MOC_LITERAL(61, 1127, 17), // "onViewClassFilter"
QT_MOC_LITERAL(62, 1145, 18), // "onDefaultViewSetup"
QT_MOC_LITERAL(63, 1164, 27), // "onBreakpointsRemoveSelected"
QT_MOC_LITERAL(64, 1192, 22), // "onBreakpointsRemoveAll"
QT_MOC_LITERAL(65, 1215, 17), // "onBreakpointsGoTo"
QT_MOC_LITERAL(66, 1233, 30), // "onBreakpointsWidgetContextMenu"
QT_MOC_LITERAL(67, 1264, 2), // "pt"
QT_MOC_LITERAL(68, 1267, 17), // "onAllTagScansDone"
QT_MOC_LITERAL(69, 1285, 24), // "onFuncWidgetItemSelected"
QT_MOC_LITERAL(70, 1310, 25), // "onClassWidgetItemSelected"
QT_MOC_LITERAL(71, 1336, 12), // "onNewInfoMsg"
QT_MOC_LITERAL(72, 1349, 12), // "onNewWarnMsg"
QT_MOC_LITERAL(73, 1362, 13), // "onNewErrorMsg"
QT_MOC_LITERAL(74, 1376, 12) // "onNewCritMsg"

    },
    "MainWindow\0newInfoMsg\0\0text\0newWarnMsg\0"
    "newErrorMsg\0newCritMsg\0onFuncFilter_textChanged\0"
    "onFuncFilterClear\0onFuncFilterCheckBoxStateChanged\0"
    "state\0onClassFilterCheckBoxStateChanged\0"
    "onClassFilterClear\0onClassFilter_textChanged\0"
    "onIncSearch_textChanged\0"
    "onFolderViewItemActivated\0QTreeWidgetItem*\0"
    "item\0column\0onThreadWidgetSelectionChanged\0"
    "onStackWidgetSelectionChanged\0onQuit\0"
    "onNext\0onStepIn\0onStepOut\0onAbout\0"
    "onSearch\0onSearchCheckBoxStateChanged\0"
    "onSearchNext\0onSearchPrev\0onGoToLine\0"
    "onGoToMain\0onStop\0"
    "onBreakpointsWidgetItemDoubleClicked\0"
    "onRestart\0onContinue\0onCodeViewContextMenuAddWatch\0"
    "onCodeViewContextMenuOpenFile\0"
    "onCodeViewContextMenuShowDefinition\0"
    "onCodeViewContextMenuShowCurrentLocation\0"
    "onSettings\0onCodeViewContextMenuToggleBreakpoint\0"
    "onCodeViewTab_tabCloseRequested\0index\0"
    "onCodeViewTab_currentChanged\0tabIdx\0"
    "onCodeViewTab_launchContextMenu\0"
    "onCodeViewTab_closeTabsToLeft\0"
    "onCodeViewTab_closeOtherTabs\0"
    "onCodeViewContextMenuJumpToLocation\0"
    "onViewStack\0onViewBreakpoints\0"
    "onViewThreads\0onViewWatch\0onViewAutoVariables\0"
    "onViewCustomVariables\0onViewTargetOutput\0"
    "onViewGedeOutput\0onViewGdbOutput\0"
    "onViewFileBrowser\0onViewFuncFilter\0"
    "onViewClassFilter\0onDefaultViewSetup\0"
    "onBreakpointsRemoveSelected\0"
    "onBreakpointsRemoveAll\0onBreakpointsGoTo\0"
    "onBreakpointsWidgetContextMenu\0pt\0"
    "onAllTagScansDone\0onFuncWidgetItemSelected\0"
    "onClassWidgetItemSelected\0onNewInfoMsg\0"
    "onNewWarnMsg\0onNewErrorMsg\0onNewCritMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  339,    2, 0x06 /* Public */,
       4,    1,  342,    2, 0x06 /* Public */,
       5,    1,  345,    2, 0x06 /* Public */,
       6,    1,  348,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  351,    2, 0x0a /* Public */,
       8,    0,  354,    2, 0x0a /* Public */,
       9,    1,  355,    2, 0x0a /* Public */,
      11,    1,  358,    2, 0x0a /* Public */,
      12,    0,  361,    2, 0x0a /* Public */,
      13,    1,  362,    2, 0x0a /* Public */,
      14,    1,  365,    2, 0x0a /* Public */,
      15,    2,  368,    2, 0x0a /* Public */,
      19,    0,  373,    2, 0x0a /* Public */,
      20,    0,  374,    2, 0x0a /* Public */,
      21,    0,  375,    2, 0x0a /* Public */,
      22,    0,  376,    2, 0x0a /* Public */,
      23,    0,  377,    2, 0x0a /* Public */,
      24,    0,  378,    2, 0x0a /* Public */,
      25,    0,  379,    2, 0x0a /* Public */,
      26,    0,  380,    2, 0x0a /* Public */,
      27,    1,  381,    2, 0x0a /* Public */,
      28,    0,  384,    2, 0x0a /* Public */,
      29,    0,  385,    2, 0x0a /* Public */,
      30,    0,  386,    2, 0x0a /* Public */,
      31,    0,  387,    2, 0x0a /* Public */,
      32,    0,  388,    2, 0x0a /* Public */,
      33,    2,  389,    2, 0x0a /* Public */,
      34,    0,  394,    2, 0x0a /* Public */,
      35,    0,  395,    2, 0x0a /* Public */,
      36,    0,  396,    2, 0x0a /* Public */,
      37,    0,  397,    2, 0x0a /* Public */,
      38,    0,  398,    2, 0x0a /* Public */,
      39,    0,  399,    2, 0x0a /* Public */,
      40,    0,  400,    2, 0x0a /* Public */,
      41,    0,  401,    2, 0x0a /* Public */,
      42,    1,  402,    2, 0x0a /* Public */,
      44,    1,  405,    2, 0x0a /* Public */,
      46,    1,  408,    2, 0x0a /* Public */,
      47,    0,  411,    2, 0x0a /* Public */,
      48,    0,  412,    2, 0x0a /* Public */,
      49,    0,  413,    2, 0x0a /* Public */,
      50,    0,  414,    2, 0x0a /* Public */,
      51,    0,  415,    2, 0x0a /* Public */,
      52,    0,  416,    2, 0x0a /* Public */,
      53,    0,  417,    2, 0x0a /* Public */,
      54,    0,  418,    2, 0x0a /* Public */,
      55,    0,  419,    2, 0x0a /* Public */,
      56,    0,  420,    2, 0x0a /* Public */,
      57,    0,  421,    2, 0x0a /* Public */,
      58,    0,  422,    2, 0x0a /* Public */,
      59,    0,  423,    2, 0x0a /* Public */,
      60,    0,  424,    2, 0x0a /* Public */,
      61,    0,  425,    2, 0x0a /* Public */,
      62,    0,  426,    2, 0x0a /* Public */,
      63,    0,  427,    2, 0x0a /* Public */,
      64,    0,  428,    2, 0x0a /* Public */,
      65,    0,  429,    2, 0x0a /* Public */,
      66,    1,  430,    2, 0x0a /* Public */,
      68,    0,  433,    2, 0x0a /* Public */,
      69,    2,  434,    2, 0x0a /* Public */,
      70,    2,  439,    2, 0x0a /* Public */,
      71,    1,  444,    2, 0x0a /* Public */,
      72,    1,  447,    2, 0x0a /* Public */,
      73,    1,  450,    2, 0x0a /* Public */,
      74,    1,  453,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   67,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newInfoMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newWarnMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newErrorMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->newCritMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onFuncFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onFuncFilterClear(); break;
        case 6: _t->onFuncFilterCheckBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onClassFilterCheckBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onClassFilterClear(); break;
        case 9: _t->onClassFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onIncSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onFolderViewItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->onThreadWidgetSelectionChanged(); break;
        case 13: _t->onStackWidgetSelectionChanged(); break;
        case 14: _t->onQuit(); break;
        case 15: _t->onNext(); break;
        case 16: _t->onStepIn(); break;
        case 17: _t->onStepOut(); break;
        case 18: _t->onAbout(); break;
        case 19: _t->onSearch(); break;
        case 20: _t->onSearchCheckBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->onSearchNext(); break;
        case 22: _t->onSearchPrev(); break;
        case 23: _t->onGoToLine(); break;
        case 24: _t->onGoToMain(); break;
        case 25: _t->onStop(); break;
        case 26: _t->onBreakpointsWidgetItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->onRestart(); break;
        case 28: _t->onContinue(); break;
        case 29: _t->onCodeViewContextMenuAddWatch(); break;
        case 30: _t->onCodeViewContextMenuOpenFile(); break;
        case 31: _t->onCodeViewContextMenuShowDefinition(); break;
        case 32: _t->onCodeViewContextMenuShowCurrentLocation(); break;
        case 33: _t->onSettings(); break;
        case 34: _t->onCodeViewContextMenuToggleBreakpoint(); break;
        case 35: _t->onCodeViewTab_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->onCodeViewTab_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->onCodeViewTab_launchContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 38: _t->onCodeViewTab_closeTabsToLeft(); break;
        case 39: _t->onCodeViewTab_closeOtherTabs(); break;
        case 40: _t->onCodeViewContextMenuJumpToLocation(); break;
        case 41: _t->onViewStack(); break;
        case 42: _t->onViewBreakpoints(); break;
        case 43: _t->onViewThreads(); break;
        case 44: _t->onViewWatch(); break;
        case 45: _t->onViewAutoVariables(); break;
        case 46: _t->onViewCustomVariables(); break;
        case 47: _t->onViewTargetOutput(); break;
        case 48: _t->onViewGedeOutput(); break;
        case 49: _t->onViewGdbOutput(); break;
        case 50: _t->onViewFileBrowser(); break;
        case 51: _t->onViewFuncFilter(); break;
        case 52: _t->onViewClassFilter(); break;
        case 53: _t->onDefaultViewSetup(); break;
        case 54: _t->onBreakpointsRemoveSelected(); break;
        case 55: _t->onBreakpointsRemoveAll(); break;
        case 56: _t->onBreakpointsGoTo(); break;
        case 57: _t->onBreakpointsWidgetContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 58: _t->onAllTagScansDone(); break;
        case 59: _t->onFuncWidgetItemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->onClassWidgetItemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->onNewInfoMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->onNewWarnMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 63: _t->onNewErrorMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 64: _t->onNewCritMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::newInfoMsg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::newWarnMsg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::newErrorMsg)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::newCritMsg)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ICore"))
        return static_cast< ICore*>(this);
    if (!strcmp(_clname, "ICodeView"))
        return static_cast< ICodeView*>(this);
    if (!strcmp(_clname, "ILogger"))
        return static_cast< ILogger*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::newInfoMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::newWarnMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::newErrorMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::newCritMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
