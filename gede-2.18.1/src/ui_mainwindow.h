/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "consolewidget.h"
#include "tabwidgetadv.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionNext;
    QAction *actionStep_In;
    QAction *actionAbout;
    QAction *actionStop;
    QAction *actionContinue;
    QAction *actionRestart;
    QAction *actionSettings;
    QAction *actionStep_Out;
    QAction *actionViewStack;
    
    // TODO quitar esto
    //QAction *actionViewCustom;
    
    QAction *actionViewBreakpoints;
    QAction *actionViewThreads;
    QAction *actionViewWatch;
    QAction *actionViewAutoVariables;
    QAction *actionViewTargetOutput;
    QAction *actionViewGdbOutput;
    QAction *actionViewFileBrowser;
    QAction *actionDefaultViewSetup;
    QAction *actionGoToLine;
    QAction *actionSearch;
    QAction *actionGoToMain;
    QAction *actionViewFunctionFilter;
    QAction *actionViewClassFilter;
    QAction *actionViewGedeOutput;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_4;
    QSplitter *splitter_2;
    QSplitter *splitter_1;
    QTabWidget *tabWidget_tags;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *treeWidget_file;
    QWidget *tab_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_classFilter;
    QCheckBox *checkBox_classFilter;
    QLineEdit *lineEdit_classFilter;
    QPushButton *pushButton_clearClassFilter;
    QTreeWidget *treeWidget_classes;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_funcFilter;
    QCheckBox *checkBox_funcFilter;
    QLineEdit *lineEdit_funcFilter;
    QPushButton *pushButton_clearFuncFilter;
    QTreeWidget *treeWidget_functions;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_10;
    TabWidgetAdv *editorTabWidget;
    QWidget *widget_search;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_search;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_searchPrev;
    QPushButton *pushButton_searchNext;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *logView;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_console;
    QHBoxLayout *horizontalLayout_2;
    ConsoleWidget *targetOutputView;
    QScrollBar *verticalScrollBar_console;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QTextEdit *gedeOutputWidget;
    QSplitter *splitter_3;
    QTreeWidget *autoWidget;
    QTreeWidget *varWidget;
    QTabWidget *tabWidget;
    QWidget *tab_threads;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget_threads;
    QWidget *tab_breakpoints;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeWidget_breakpoints;
    QWidget *tab_stack;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget_stack;
    
    // TODO quitar esto
    //QTreeWidget *treeWidget_custom;
    
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuExecution;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuSearch;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(903, 728);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/res/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/res/step_over.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon1);
        actionStep_In = new QAction(MainWindow);
        actionStep_In->setObjectName(QString::fromUtf8("actionStep_In"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/res/step_into.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_In->setIcon(icon2);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/res/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionContinue = new QAction(MainWindow);
        actionContinue->setObjectName(QString::fromUtf8("actionContinue"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/res/continue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContinue->setIcon(icon4);
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/res/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestart->setIcon(icon5);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionStep_Out = new QAction(MainWindow);
        actionStep_Out->setObjectName(QString::fromUtf8("actionStep_Out"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/res/step_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_Out->setIcon(icon6);
        actionViewStack = new QAction(MainWindow);
        actionViewStack->setObjectName(QString::fromUtf8("actionViewStack"));
        actionViewStack->setCheckable(true);
        actionViewStack->setChecked(true);

        // TODO quitar esto       
        // actionViewCustom = new QAction(MainWindow);
        // actionViewCustom->setObjectName(QString::fromUtf8("actionViewCustom"));
        // actionViewCustom->setCheckable(true);
        // actionViewCustom->setChecked(true);

        actionViewBreakpoints = new QAction(MainWindow);
        actionViewBreakpoints->setObjectName(QString::fromUtf8("actionViewBreakpoints"));
        actionViewBreakpoints->setCheckable(true);
        actionViewThreads = new QAction(MainWindow);
        actionViewThreads->setObjectName(QString::fromUtf8("actionViewThreads"));
        actionViewThreads->setCheckable(true);
        actionViewWatch = new QAction(MainWindow);
        actionViewWatch->setObjectName(QString::fromUtf8("actionViewWatch"));
        actionViewWatch->setCheckable(true);
        actionViewAutoVariables = new QAction(MainWindow);
        actionViewAutoVariables->setObjectName(QString::fromUtf8("actionViewAutoVariables"));
        actionViewAutoVariables->setCheckable(true);
        actionViewTargetOutput = new QAction(MainWindow);
        actionViewTargetOutput->setObjectName(QString::fromUtf8("actionViewTargetOutput"));
        actionViewTargetOutput->setCheckable(true);
        actionViewGdbOutput = new QAction(MainWindow);
        actionViewGdbOutput->setObjectName(QString::fromUtf8("actionViewGdbOutput"));
        actionViewGdbOutput->setCheckable(true);
        actionViewFileBrowser = new QAction(MainWindow);
        actionViewFileBrowser->setObjectName(QString::fromUtf8("actionViewFileBrowser"));
        actionViewFileBrowser->setCheckable(true);
        actionDefaultViewSetup = new QAction(MainWindow);
        actionDefaultViewSetup->setObjectName(QString::fromUtf8("actionDefaultViewSetup"));
        actionGoToLine = new QAction(MainWindow);
        actionGoToLine->setObjectName(QString::fromUtf8("actionGoToLine"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        actionGoToMain = new QAction(MainWindow);
        actionGoToMain->setObjectName(QString::fromUtf8("actionGoToMain"));
        actionViewFunctionFilter = new QAction(MainWindow);
        actionViewFunctionFilter->setObjectName(QString::fromUtf8("actionViewFunctionFilter"));
        actionViewFunctionFilter->setCheckable(true);
        actionViewClassFilter = new QAction(MainWindow);
        actionViewClassFilter->setObjectName(QString::fromUtf8("actionViewClassFilter"));
        actionViewClassFilter->setCheckable(true);
        actionViewGedeOutput = new QAction(MainWindow);
        actionViewGedeOutput->setObjectName(QString::fromUtf8("actionViewGedeOutput"));
        actionViewGedeOutput->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_1 = new QSplitter(splitter_2);
        splitter_1->setObjectName(QString::fromUtf8("splitter_1"));
        splitter_1->setOrientation(Qt::Horizontal);
        tabWidget_tags = new QTabWidget(splitter_1);
        tabWidget_tags->setObjectName(QString::fromUtf8("tabWidget_tags"));
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        verticalLayout_7 = new QVBoxLayout(tab_9);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        treeWidget_file = new QTreeWidget(tab_9);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Name"));
        treeWidget_file->setHeaderItem(__qtreewidgetitem);
        treeWidget_file->setObjectName(QString::fromUtf8("treeWidget_file"));

        verticalLayout_7->addWidget(treeWidget_file);

        tabWidget_tags->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        verticalLayout_9 = new QVBoxLayout(tab_10);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_classFilter = new QHBoxLayout();
        horizontalLayout_classFilter->setObjectName(QString::fromUtf8("horizontalLayout_classFilter"));
        horizontalLayout_classFilter->setContentsMargins(5, -1, -1, -1);
        checkBox_classFilter = new QCheckBox(tab_10);
        checkBox_classFilter->setObjectName(QString::fromUtf8("checkBox_classFilter"));

        horizontalLayout_classFilter->addWidget(checkBox_classFilter);

        lineEdit_classFilter = new QLineEdit(tab_10);
        lineEdit_classFilter->setObjectName(QString::fromUtf8("lineEdit_classFilter"));

        horizontalLayout_classFilter->addWidget(lineEdit_classFilter);

        pushButton_clearClassFilter = new QPushButton(tab_10);
        pushButton_clearClassFilter->setObjectName(QString::fromUtf8("pushButton_clearClassFilter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_clearClassFilter->sizePolicy().hasHeightForWidth());
        pushButton_clearClassFilter->setSizePolicy(sizePolicy);
        pushButton_clearClassFilter->setMaximumSize(QSize(48, 16777215));

        horizontalLayout_classFilter->addWidget(pushButton_clearClassFilter);


        verticalLayout_9->addLayout(horizontalLayout_classFilter);

        treeWidget_classes = new QTreeWidget(tab_10);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("Name"));
        treeWidget_classes->setHeaderItem(__qtreewidgetitem1);
        treeWidget_classes->setObjectName(QString::fromUtf8("treeWidget_classes"));
        treeWidget_classes->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_9->addWidget(treeWidget_classes);

        tabWidget_tags->addTab(tab_10, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_funcFilter = new QHBoxLayout();
        horizontalLayout_funcFilter->setObjectName(QString::fromUtf8("horizontalLayout_funcFilter"));
        horizontalLayout_funcFilter->setContentsMargins(5, -1, -1, -1);
        checkBox_funcFilter = new QCheckBox(tab);
        checkBox_funcFilter->setObjectName(QString::fromUtf8("checkBox_funcFilter"));

        horizontalLayout_funcFilter->addWidget(checkBox_funcFilter);

        lineEdit_funcFilter = new QLineEdit(tab);
        lineEdit_funcFilter->setObjectName(QString::fromUtf8("lineEdit_funcFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_funcFilter->sizePolicy().hasHeightForWidth());
        lineEdit_funcFilter->setSizePolicy(sizePolicy1);

        horizontalLayout_funcFilter->addWidget(lineEdit_funcFilter);

        pushButton_clearFuncFilter = new QPushButton(tab);
        pushButton_clearFuncFilter->setObjectName(QString::fromUtf8("pushButton_clearFuncFilter"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_clearFuncFilter->sizePolicy().hasHeightForWidth());
        pushButton_clearFuncFilter->setSizePolicy(sizePolicy2);
        pushButton_clearFuncFilter->setMaximumSize(QSize(48, 16777215));

        horizontalLayout_funcFilter->addWidget(pushButton_clearFuncFilter);


        verticalLayout_8->addLayout(horizontalLayout_funcFilter);

        treeWidget_functions = new QTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("Name"));
        treeWidget_functions->setHeaderItem(__qtreewidgetitem2);
        treeWidget_functions->setObjectName(QString::fromUtf8("treeWidget_functions"));
        treeWidget_functions->setSelectionMode(QAbstractItemView::NoSelection);
        treeWidget_functions->setRootIsDecorated(false);
        treeWidget_functions->setColumnCount(3);

        verticalLayout_8->addWidget(treeWidget_functions);

        tabWidget_tags->addTab(tab, QString());
        splitter_1->addWidget(tabWidget_tags);
        verticalLayoutWidget = new QWidget(splitter_1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        editorTabWidget = new TabWidgetAdv(verticalLayoutWidget);
        editorTabWidget->setObjectName(QString::fromUtf8("editorTabWidget"));
        editorTabWidget->setTabsClosable(true);

        verticalLayout_10->addWidget(editorTabWidget);

        widget_search = new QWidget(verticalLayoutWidget);
        widget_search->setObjectName(QString::fromUtf8("widget_search"));
        horizontalLayout = new QHBoxLayout(widget_search);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 1, -1, 1);
        checkBox_search = new QCheckBox(widget_search);
        checkBox_search->setObjectName(QString::fromUtf8("checkBox_search"));
        sizePolicy2.setHeightForWidth(checkBox_search->sizePolicy().hasHeightForWidth());
        checkBox_search->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(checkBox_search);

        lineEdit_search = new QLineEdit(widget_search);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_search->sizePolicy().hasHeightForWidth());
        lineEdit_search->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(lineEdit_search);

        pushButton_searchPrev = new QPushButton(widget_search);
        pushButton_searchPrev->setObjectName(QString::fromUtf8("pushButton_searchPrev"));
        sizePolicy2.setHeightForWidth(pushButton_searchPrev->sizePolicy().hasHeightForWidth());
        pushButton_searchPrev->setSizePolicy(sizePolicy2);
        pushButton_searchPrev->setMaximumSize(QSize(48, 16777215));

        horizontalLayout->addWidget(pushButton_searchPrev);

        pushButton_searchNext = new QPushButton(widget_search);
        pushButton_searchNext->setObjectName(QString::fromUtf8("pushButton_searchNext"));
        sizePolicy2.setHeightForWidth(pushButton_searchNext->sizePolicy().hasHeightForWidth());
        pushButton_searchNext->setSizePolicy(sizePolicy2);
        pushButton_searchNext->setMaximumSize(QSize(48, 16777215));

        horizontalLayout->addWidget(pushButton_searchNext);


        verticalLayout_10->addWidget(widget_search);

        splitter_1->addWidget(verticalLayoutWidget);
        splitter_2->addWidget(splitter_1);
        tabWidget_2 = new QTabWidget(splitter_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        logView = new QPlainTextEdit(tab_4);
        logView->setObjectName(QString::fromUtf8("logView"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(logView->sizePolicy().hasHeightForWidth());
        logView->setSizePolicy(sizePolicy4);
        logView->setBaseSize(QSize(0, 40));
        logView->setUndoRedoEnabled(false);
        logView->setReadOnly(true);

        verticalLayout_5->addWidget(logView);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_console = new QWidget(tab_5);
        widget_console->setObjectName(QString::fromUtf8("widget_console"));
        horizontalLayout_2 = new QHBoxLayout(widget_console);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        targetOutputView = new ConsoleWidget(widget_console);
        targetOutputView->setObjectName(QString::fromUtf8("targetOutputView"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(targetOutputView->sizePolicy().hasHeightForWidth());
        targetOutputView->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(targetOutputView);

        verticalScrollBar_console = new QScrollBar(widget_console);
        verticalScrollBar_console->setObjectName(QString::fromUtf8("verticalScrollBar_console"));
        verticalScrollBar_console->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalScrollBar_console);


        verticalLayout_6->addWidget(widget_console);

        tabWidget_2->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        gedeOutputWidget = new QTextEdit(tab_2);
        gedeOutputWidget->setObjectName(QString::fromUtf8("gedeOutputWidget"));
        gedeOutputWidget->setUndoRedoEnabled(false);
        gedeOutputWidget->setReadOnly(true);

        verticalLayout_11->addWidget(gedeOutputWidget);

        tabWidget_2->addTab(tab_2, QString());
        splitter_2->addWidget(tabWidget_2);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        autoWidget = new QTreeWidget(splitter_3);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setText(0, QString::fromUtf8("1"));
        autoWidget->setHeaderItem(__qtreewidgetitem3);
        autoWidget->setObjectName(QString::fromUtf8("autoWidget"));
        autoWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        autoWidget->setUniformRowHeights(true);
        splitter_3->addWidget(autoWidget);
        varWidget = new QTreeWidget(splitter_3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem();
        __qtreewidgetitem4->setText(0, QString::fromUtf8("1"));
        varWidget->setHeaderItem(__qtreewidgetitem4);
        varWidget->setObjectName(QString::fromUtf8("varWidget"));
        sizePolicy4.setHeightForWidth(varWidget->sizePolicy().hasHeightForWidth());
        varWidget->setSizePolicy(sizePolicy4);
        varWidget->setBaseSize(QSize(80, 1));
        varWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        varWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        varWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter_3->addWidget(varWidget);
        tabWidget = new QTabWidget(splitter_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_threads = new QWidget();
        tab_threads->setObjectName(QString::fromUtf8("tab_threads"));
        verticalLayout_2 = new QVBoxLayout(tab_threads);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        treeWidget_threads = new QTreeWidget(tab_threads);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem();
        __qtreewidgetitem5->setText(0, QString::fromUtf8("1"));
        treeWidget_threads->setHeaderItem(__qtreewidgetitem5);
        treeWidget_threads->setObjectName(QString::fromUtf8("treeWidget_threads"));
        treeWidget_threads->setRootIsDecorated(false);

        verticalLayout_2->addWidget(treeWidget_threads);

        tabWidget->addTab(tab_threads, QString());
        tab_breakpoints = new QWidget();
        tab_breakpoints->setObjectName(QString::fromUtf8("tab_breakpoints"));
        verticalLayout_4 = new QVBoxLayout(tab_breakpoints);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        treeWidget_breakpoints = new QTreeWidget(tab_breakpoints);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem();
        __qtreewidgetitem6->setText(0, QString::fromUtf8("1"));
        treeWidget_breakpoints->setHeaderItem(__qtreewidgetitem6);
        treeWidget_breakpoints->setObjectName(QString::fromUtf8("treeWidget_breakpoints"));
        treeWidget_breakpoints->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget_breakpoints->setRootIsDecorated(false);
        treeWidget_breakpoints->setAllColumnsShowFocus(true);

        verticalLayout_4->addWidget(treeWidget_breakpoints);

        tabWidget->addTab(tab_breakpoints, QString());
        tab_stack = new QWidget();
        tab_stack->setObjectName(QString::fromUtf8("tab_stack"));
        verticalLayout_3 = new QVBoxLayout(tab_stack);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        treeWidget_stack = new QTreeWidget(tab_stack);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem();
        __qtreewidgetitem7->setText(0, QString::fromUtf8("1"));
        treeWidget_stack->setHeaderItem(__qtreewidgetitem7);
        treeWidget_stack->setObjectName(QString::fromUtf8("treeWidget_stack"));
        treeWidget_stack->setRootIsDecorated(false);

        verticalLayout_3->addWidget(treeWidget_stack);

// TODO borrar esto
        // treeWidget_custom = new QTreeWidget(tab_stack);
        // QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem();
        // __qtreewidgetitem8->setText(0, QString::fromUtf8("1"));
        // treeWidget_custom->setHeaderItem(__qtreewidgetitem8);
        // treeWidget_custom->setObjectName(QString::fromUtf8("treeWidget_custom"));
        // treeWidget_custom->setRootIsDecorated(false);

        // verticalLayout_3->addWidget(treeWidget_custom);
//

        tabWidget->addTab(tab_stack, QString());
        splitter_3->addWidget(tabWidget);
        splitter_4->addWidget(splitter_3);

        verticalLayout->addWidget(splitter_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 903, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExecution = new QMenu(menubar);
        menuExecution->setObjectName(QString::fromUtf8("menuExecution"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSearch->menuAction());
        menubar->addAction(menuExecution->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuExecution->addAction(actionRestart);
        menuExecution->addAction(actionStop);
        menuExecution->addSeparator();
        menuExecution->addAction(actionNext);
        menuExecution->addAction(actionStep_In);
        menuExecution->addAction(actionStep_Out);
        menuExecution->addAction(actionContinue);
        menuHelp->addAction(actionAbout);
        menuView->addAction(actionViewStack);

        // TODO quitar esto
        //menuView->addAction(actionViewCustom);

        menuView->addAction(actionViewBreakpoints);
        menuView->addAction(actionViewThreads);
        menuView->addSeparator();
        menuView->addAction(actionViewWatch);
        menuView->addAction(actionViewAutoVariables);
        menuView->addSeparator();
        menuView->addAction(actionViewTargetOutput);
        menuView->addAction(actionViewGedeOutput);
        menuView->addAction(actionViewGdbOutput);
        menuView->addAction(actionViewFileBrowser);
        menuView->addSeparator();
        menuView->addAction(actionViewFunctionFilter);
        menuView->addAction(actionViewClassFilter);
        menuView->addSeparator();
        menuView->addAction(actionDefaultViewSetup);
        menuSearch->addAction(actionGoToLine);
        menuSearch->addAction(actionSearch);
        menuSearch->addAction(actionGoToMain);
        toolBar->addAction(actionQuit);
        toolBar->addSeparator();
        toolBar->addAction(actionRestart);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionNext);
        toolBar->addAction(actionStep_In);
        toolBar->addAction(actionStep_Out);
        toolBar->addAction(actionContinue);

        retranslateUi(MainWindow);

        tabWidget_tags->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionNext->setText(QApplication::translate("MainWindow", "Next", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNext->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionStep_In->setText(QApplication::translate("MainWindow", "Step In", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStep_In->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStop->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", nullptr));
#endif // QT_NO_SHORTCUT
        actionContinue->setText(QApplication::translate("MainWindow", "Continue", nullptr));
#ifndef QT_NO_SHORTCUT
        actionContinue->setShortcut(QApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_NO_SHORTCUT
        actionRestart->setText(QApplication::translate("MainWindow", "Restart", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRestart->setShortcut(QApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        actionStep_Out->setText(QApplication::translate("MainWindow", "Step Out", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStep_Out->setShortcut(QApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionViewStack->setText(QApplication::translate("MainWindow", "Stack", nullptr));
        
        // TODO quitar esto
        //actionViewCustom->setText(QApplication::translate("MainWindow", "Custom", nullptr));
        
        actionViewBreakpoints->setText(QApplication::translate("MainWindow", "Breakpoints", nullptr));
        actionViewThreads->setText(QApplication::translate("MainWindow", "Threads", nullptr));
        actionViewWatch->setText(QApplication::translate("MainWindow", "Watch Variables", nullptr));
        actionViewAutoVariables->setText(QApplication::translate("MainWindow", "Auto Variables", nullptr));
        actionViewTargetOutput->setText(QApplication::translate("MainWindow", "Target Console", nullptr));
        actionViewGdbOutput->setText(QApplication::translate("MainWindow", "GDB Output", nullptr));
        actionViewFileBrowser->setText(QApplication::translate("MainWindow", "File Browser", nullptr));
        actionDefaultViewSetup->setText(QApplication::translate("MainWindow", "Restore Default View", nullptr));
        actionGoToLine->setText(QApplication::translate("MainWindow", "Go To Line...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGoToLine->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionGoToMain->setText(QApplication::translate("MainWindow", "Go To main()", nullptr));
        actionViewFunctionFilter->setText(QApplication::translate("MainWindow", "Function Filter", nullptr));
        actionViewClassFilter->setText(QApplication::translate("MainWindow", "Class Filter", nullptr));
        actionViewGedeOutput->setText(QApplication::translate("MainWindow", "Gede Output", nullptr));
        tabWidget_tags->setTabText(tabWidget_tags->indexOf(tab_9), QApplication::translate("MainWindow", "Files", nullptr));
        checkBox_classFilter->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit_classFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set class view filter. Seperate multiple patterns with a ';'.<br/>Some examples:</p><p>test;something =&gt; will show classes &quot;testsomething&quot; and &quot;test_something&quot;.<br/>test =&gt; will show classes &quot;test&quot; and &quot;test99&quot;.<br/>test() =&gt; will only show class &quot;test&quot;.<br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_clearClassFilter->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_classes->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Line", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Filename", nullptr));
        tabWidget_tags->setTabText(tabWidget_tags->indexOf(tab_10), QApplication::translate("MainWindow", "Classes", nullptr));
        checkBox_funcFilter->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit_funcFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set view filter strings. Seperate multiple filters with a ';'.<br/>Some examples:</p><p>func;something =&gt; will show funcsomething() and func_something()<br/>test =&gt; will show test() and test99()<br/>test() =&gt; will only show test().<br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_clearFuncFilter->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_functions->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindow", "Line", nullptr));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "Filename", nullptr));
        tabWidget_tags->setTabText(tabWidget_tags->indexOf(tab), QApplication::translate("MainWindow", "Functions", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBox_search->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Closes search</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBox_search->setText(QString());
        pushButton_searchPrev->setText(QApplication::translate("MainWindow", "Prev", nullptr));
        pushButton_searchNext->setText(QApplication::translate("MainWindow", "Next", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "<GDB Output>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "<Target Console>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "<Gede Output>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_threads), QApplication::translate("MainWindow", "Threads", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_breakpoints), QApplication::translate("MainWindow", "Breakpoints", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_stack), QApplication::translate("MainWindow", "Stack", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuExecution->setTitle(QApplication::translate("MainWindow", "Execution", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuSearch->setTitle(QApplication::translate("MainWindow", "Search", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
