/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_gui;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QComboBox *comboBox_guiStyle;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QPushButton *pushButton_selectMemoryFont;
    QLabel *label_4;
    QPushButton *pushButton_selectGdbOutputFont;
    QLabel *label_29;
    QPushButton *pushButton_selectGedeOutputFont;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QComboBox *comboBox_sortTags;
    QCheckBox *checkBox_showLineNumbers;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QSpinBox *spinBox_maxTabs;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_selectFont;
    QLabel *label_27;
    QLabel *label_25;
    QSpinBox *spinBox_tabIndent;
    QComboBox *comboBox_currentLineStyle;
    QCheckBox *checkBox_showLineNo;
    QGroupBox *groupBox_991;
    QGridLayout *gridLayout;
    QLabel *label_7;
    MColorButton *pushButton_clr_foreground;
    MColorButton *pushButton_clr_comment;
    QLabel *label_17;
    QLabel *label_8;
    QLabel *label_6;
    MColorButton *pushButton_clr_string;
    MColorButton *pushButton_clr_keyword;
    MColorButton *pushButton_clr_number;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_9;
    MColorButton *pushButton_clr_curLine;
    MColorButton *pushButton_clr_cppKeyword;
    MColorButton *pushButton_clr_incString;
    MColorButton *pushButton_clr_background;
    QLabel *label_10;
    QLabel *label_28;
    MColorButton *pushButton_clr_selection;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout_2;
    QLabel *label_23;
    QSpinBox *spinBox_progConScrollback;
    QLabel *label_24;
    QPushButton *pushButton_selectOutputFont;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_2;
    MColorButton *pushButton_progConCursorClr;
    QLabel *label_19;
    QLabel *label_20;
    MColorButton *pushButton_progConFgClr;
    MColorButton *pushButton_progConBgClr;
    QLabel *label_26;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    MColorButton *pushButton_progConClrBright5;
    MColorButton *pushButton_progConClrBright7;
    MColorButton *pushButton_progConClrBright3;
    MColorButton *pushButton_progConClrBright2;
    MColorButton *pushButton_progConClrBright1;
    MColorButton *pushButton_progConClrBright8;
    MColorButton *pushButton_progConClrBright6;
    MColorButton *pushButton_progConClrBright4;
    MColorButton *pushButton_progConClrNormal1;
    MColorButton *pushButton_progConClrNormal2;
    MColorButton *pushButton_progConClrNormal3;
    MColorButton *pushButton_progConClrNormal4;
    MColorButton *pushButton_progConClrNormal5;
    MColorButton *pushButton_progConClrNormal6;
    MColorButton *pushButton_progConClrNormal7;
    MColorButton *pushButton_progConClrNormal8;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QLabel *label_21;
    QComboBox *comboBox_backspaceKey;
    QComboBox *comboBox_deleteKey;
    QLabel *label_22;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_sourceIgnoreDirs;
    QCheckBox *checkBox_enableDebugLog;
    QCheckBox *checkBox_globalProjConfig;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QSpinBox *spinBox_variableInfoWindowDelay;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(515, 545);
        SettingsDialog->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 1px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 300));
        tab_gui = new QWidget();
        tab_gui->setObjectName(QString::fromUtf8("tab_gui"));
        verticalLayout_2 = new QVBoxLayout(tab_gui);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_15 = new QLabel(tab_gui);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_15);

        comboBox_guiStyle = new QComboBox(tab_gui);
        comboBox_guiStyle->setObjectName(QString::fromUtf8("comboBox_guiStyle"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_guiStyle->sizePolicy().hasHeightForWidth());
        comboBox_guiStyle->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(comboBox_guiStyle);


        verticalLayout_2->addLayout(horizontalLayout_7);

        groupBox_2 = new QGroupBox(tab_gui);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        pushButton_selectMemoryFont = new QPushButton(groupBox_2);
        pushButton_selectMemoryFont->setObjectName(QString::fromUtf8("pushButton_selectMemoryFont"));
        sizePolicy1.setHeightForWidth(pushButton_selectMemoryFont->sizePolicy().hasHeightForWidth());
        pushButton_selectMemoryFont->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_selectMemoryFont, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        pushButton_selectGdbOutputFont = new QPushButton(groupBox_2);
        pushButton_selectGdbOutputFont->setObjectName(QString::fromUtf8("pushButton_selectGdbOutputFont"));
        sizePolicy1.setHeightForWidth(pushButton_selectGdbOutputFont->sizePolicy().hasHeightForWidth());
        pushButton_selectGdbOutputFont->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_selectGdbOutputFont, 1, 1, 1, 1);

        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_3->addWidget(label_29, 2, 0, 1, 1);

        pushButton_selectGedeOutputFont = new QPushButton(groupBox_2);
        pushButton_selectGedeOutputFont->setObjectName(QString::fromUtf8("pushButton_selectGedeOutputFont"));

        gridLayout_3->addWidget(pushButton_selectGedeOutputFont, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab_gui);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_14);

        comboBox_sortTags = new QComboBox(groupBox);
        comboBox_sortTags->addItem(QString());
        comboBox_sortTags->addItem(QString());
        comboBox_sortTags->setObjectName(QString::fromUtf8("comboBox_sortTags"));
        sizePolicy1.setHeightForWidth(comboBox_sortTags->sizePolicy().hasHeightForWidth());
        comboBox_sortTags->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(comboBox_sortTags);


        verticalLayout_5->addLayout(horizontalLayout_6);

        checkBox_showLineNumbers = new QCheckBox(groupBox);
        checkBox_showLineNumbers->setObjectName(QString::fromUtf8("checkBox_showLineNumbers"));

        verticalLayout_5->addWidget(checkBox_showLineNumbers);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(4, 4, 4, 4);
        label = new QLabel(tab_gui);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        spinBox_maxTabs = new QSpinBox(tab_gui);
        spinBox_maxTabs->setObjectName(QString::fromUtf8("spinBox_maxTabs"));
        spinBox_maxTabs->setMaximum(999);

        horizontalLayout_8->addWidget(spinBox_maxTabs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_gui, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(150, 0));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        pushButton_selectFont = new QPushButton(tab);
        pushButton_selectFont->setObjectName(QString::fromUtf8("pushButton_selectFont"));
        sizePolicy1.setHeightForWidth(pushButton_selectFont->sizePolicy().hasHeightForWidth());
        pushButton_selectFont->setSizePolicy(sizePolicy1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pushButton_selectFont);

        label_27 = new QLabel(tab);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_27);

        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_25);

        spinBox_tabIndent = new QSpinBox(tab);
        spinBox_tabIndent->setObjectName(QString::fromUtf8("spinBox_tabIndent"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, spinBox_tabIndent);

        comboBox_currentLineStyle = new QComboBox(tab);
        comboBox_currentLineStyle->setObjectName(QString::fromUtf8("comboBox_currentLineStyle"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, comboBox_currentLineStyle);


        verticalLayout_4->addLayout(formLayout_3);

        checkBox_showLineNo = new QCheckBox(tab);
        checkBox_showLineNo->setObjectName(QString::fromUtf8("checkBox_showLineNo"));

        verticalLayout_4->addWidget(checkBox_showLineNo);

        groupBox_991 = new QGroupBox(tab);
        groupBox_991->setObjectName(QString::fromUtf8("groupBox_991"));
        gridLayout = new QGridLayout(groupBox_991);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        label_7 = new QLabel(groupBox_991);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        pushButton_clr_foreground = new MColorButton(groupBox_991);
        pushButton_clr_foreground->setObjectName(QString::fromUtf8("pushButton_clr_foreground"));

        gridLayout->addWidget(pushButton_clr_foreground, 7, 1, 1, 1);

        pushButton_clr_comment = new MColorButton(groupBox_991);
        pushButton_clr_comment->setObjectName(QString::fromUtf8("pushButton_clr_comment"));

        gridLayout->addWidget(pushButton_clr_comment, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_991);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 8, 0, 1, 1);

        label_8 = new QLabel(groupBox_991);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_991);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        pushButton_clr_string = new MColorButton(groupBox_991);
        pushButton_clr_string->setObjectName(QString::fromUtf8("pushButton_clr_string"));

        gridLayout->addWidget(pushButton_clr_string, 2, 1, 1, 1);

        pushButton_clr_keyword = new MColorButton(groupBox_991);
        pushButton_clr_keyword->setObjectName(QString::fromUtf8("pushButton_clr_keyword"));

        gridLayout->addWidget(pushButton_clr_keyword, 4, 1, 1, 1);

        pushButton_clr_number = new MColorButton(groupBox_991);
        pushButton_clr_number->setObjectName(QString::fromUtf8("pushButton_clr_number"));

        gridLayout->addWidget(pushButton_clr_number, 6, 1, 1, 1);

        label_11 = new QLabel(groupBox_991);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label_12 = new QLabel(groupBox_991);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        label_13 = new QLabel(groupBox_991);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 7, 0, 1, 1);

        label_9 = new QLabel(groupBox_991);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        pushButton_clr_curLine = new MColorButton(groupBox_991);
        pushButton_clr_curLine->setObjectName(QString::fromUtf8("pushButton_clr_curLine"));

        gridLayout->addWidget(pushButton_clr_curLine, 8, 1, 1, 1);

        pushButton_clr_cppKeyword = new MColorButton(groupBox_991);
        pushButton_clr_cppKeyword->setObjectName(QString::fromUtf8("pushButton_clr_cppKeyword"));

        gridLayout->addWidget(pushButton_clr_cppKeyword, 5, 1, 1, 1);

        pushButton_clr_incString = new MColorButton(groupBox_991);
        pushButton_clr_incString->setObjectName(QString::fromUtf8("pushButton_clr_incString"));

        gridLayout->addWidget(pushButton_clr_incString, 3, 1, 1, 1);

        pushButton_clr_background = new MColorButton(groupBox_991);
        pushButton_clr_background->setObjectName(QString::fromUtf8("pushButton_clr_background"));
        sizePolicy1.setHeightForWidth(pushButton_clr_background->sizePolicy().hasHeightForWidth());
        pushButton_clr_background->setSizePolicy(sizePolicy1);
        pushButton_clr_background->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(pushButton_clr_background, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_991);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_28 = new QLabel(groupBox_991);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout->addWidget(label_28, 9, 0, 1, 1);

        pushButton_clr_selection = new MColorButton(groupBox_991);
        pushButton_clr_selection->setObjectName(QString::fromUtf8("pushButton_clr_selection"));

        gridLayout->addWidget(pushButton_clr_selection, 9, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_991);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_7 = new QVBoxLayout(tab_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_23);

        spinBox_progConScrollback = new QSpinBox(tab_3);
        spinBox_progConScrollback->setObjectName(QString::fromUtf8("spinBox_progConScrollback"));
        spinBox_progConScrollback->setMaximum(99999);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBox_progConScrollback);

        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_24);

        pushButton_selectOutputFont = new QPushButton(tab_3);
        pushButton_selectOutputFont->setObjectName(QString::fromUtf8("pushButton_selectOutputFont"));
        sizePolicy1.setHeightForWidth(pushButton_selectOutputFont->sizePolicy().hasHeightForWidth());
        pushButton_selectOutputFont->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton_selectOutputFont);


        verticalLayout_7->addLayout(formLayout_2);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_progConCursorClr = new MColorButton(groupBox_3);
        pushButton_progConCursorClr->setObjectName(QString::fromUtf8("pushButton_progConCursorClr"));

        gridLayout_2->addWidget(pushButton_progConCursorClr, 2, 1, 1, 1);

        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 0, 0, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 2, 0, 1, 1);

        pushButton_progConFgClr = new MColorButton(groupBox_3);
        pushButton_progConFgClr->setObjectName(QString::fromUtf8("pushButton_progConFgClr"));

        gridLayout_2->addWidget(pushButton_progConFgClr, 1, 1, 1, 1);

        pushButton_progConBgClr = new MColorButton(groupBox_3);
        pushButton_progConBgClr->setObjectName(QString::fromUtf8("pushButton_progConBgClr"));
        sizePolicy1.setHeightForWidth(pushButton_progConBgClr->sizePolicy().hasHeightForWidth());
        pushButton_progConBgClr->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_progConBgClr, 0, 1, 1, 1);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 1, 0, 1, 1);


        verticalLayout_8->addLayout(gridLayout_2);


        verticalLayout_7->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_progConClrBright5 = new MColorButton(groupBox_4);
        pushButton_progConClrBright5->setObjectName(QString::fromUtf8("pushButton_progConClrBright5"));

        gridLayout_4->addWidget(pushButton_progConClrBright5, 0, 4, 1, 1);

        pushButton_progConClrBright7 = new MColorButton(groupBox_4);
        pushButton_progConClrBright7->setObjectName(QString::fromUtf8("pushButton_progConClrBright7"));

        gridLayout_4->addWidget(pushButton_progConClrBright7, 0, 6, 1, 1);

        pushButton_progConClrBright3 = new MColorButton(groupBox_4);
        pushButton_progConClrBright3->setObjectName(QString::fromUtf8("pushButton_progConClrBright3"));

        gridLayout_4->addWidget(pushButton_progConClrBright3, 0, 2, 1, 1);

        pushButton_progConClrBright2 = new MColorButton(groupBox_4);
        pushButton_progConClrBright2->setObjectName(QString::fromUtf8("pushButton_progConClrBright2"));

        gridLayout_4->addWidget(pushButton_progConClrBright2, 0, 1, 1, 1);

        pushButton_progConClrBright1 = new MColorButton(groupBox_4);
        pushButton_progConClrBright1->setObjectName(QString::fromUtf8("pushButton_progConClrBright1"));

        gridLayout_4->addWidget(pushButton_progConClrBright1, 0, 0, 1, 1);

        pushButton_progConClrBright8 = new MColorButton(groupBox_4);
        pushButton_progConClrBright8->setObjectName(QString::fromUtf8("pushButton_progConClrBright8"));

        gridLayout_4->addWidget(pushButton_progConClrBright8, 0, 7, 1, 1);

        pushButton_progConClrBright6 = new MColorButton(groupBox_4);
        pushButton_progConClrBright6->setObjectName(QString::fromUtf8("pushButton_progConClrBright6"));

        gridLayout_4->addWidget(pushButton_progConClrBright6, 0, 5, 1, 1);

        pushButton_progConClrBright4 = new MColorButton(groupBox_4);
        pushButton_progConClrBright4->setObjectName(QString::fromUtf8("pushButton_progConClrBright4"));

        gridLayout_4->addWidget(pushButton_progConClrBright4, 0, 3, 1, 1);

        pushButton_progConClrNormal1 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal1->setObjectName(QString::fromUtf8("pushButton_progConClrNormal1"));

        gridLayout_4->addWidget(pushButton_progConClrNormal1, 1, 0, 1, 1);

        pushButton_progConClrNormal2 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal2->setObjectName(QString::fromUtf8("pushButton_progConClrNormal2"));

        gridLayout_4->addWidget(pushButton_progConClrNormal2, 1, 1, 1, 1);

        pushButton_progConClrNormal3 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal3->setObjectName(QString::fromUtf8("pushButton_progConClrNormal3"));

        gridLayout_4->addWidget(pushButton_progConClrNormal3, 1, 2, 1, 1);

        pushButton_progConClrNormal4 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal4->setObjectName(QString::fromUtf8("pushButton_progConClrNormal4"));

        gridLayout_4->addWidget(pushButton_progConClrNormal4, 1, 3, 1, 1);

        pushButton_progConClrNormal5 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal5->setObjectName(QString::fromUtf8("pushButton_progConClrNormal5"));

        gridLayout_4->addWidget(pushButton_progConClrNormal5, 1, 4, 1, 1);

        pushButton_progConClrNormal6 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal6->setObjectName(QString::fromUtf8("pushButton_progConClrNormal6"));

        gridLayout_4->addWidget(pushButton_progConClrNormal6, 1, 5, 1, 1);

        pushButton_progConClrNormal7 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal7->setObjectName(QString::fromUtf8("pushButton_progConClrNormal7"));

        gridLayout_4->addWidget(pushButton_progConClrNormal7, 1, 6, 1, 1);

        pushButton_progConClrNormal8 = new MColorButton(groupBox_4);
        pushButton_progConClrNormal8->setObjectName(QString::fromUtf8("pushButton_progConClrNormal8"));

        gridLayout_4->addWidget(pushButton_progConClrNormal8, 1, 7, 1, 1);


        verticalLayout_7->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_21);

        comboBox_backspaceKey = new QComboBox(groupBox_5);
        comboBox_backspaceKey->addItem(QString());
        comboBox_backspaceKey->addItem(QString());
        comboBox_backspaceKey->addItem(QString());
        comboBox_backspaceKey->setObjectName(QString::fromUtf8("comboBox_backspaceKey"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_backspaceKey);

        comboBox_deleteKey = new QComboBox(groupBox_5);
        comboBox_deleteKey->addItem(QString());
        comboBox_deleteKey->addItem(QString());
        comboBox_deleteKey->addItem(QString());
        comboBox_deleteKey->setObjectName(QString::fromUtf8("comboBox_deleteKey"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_deleteKey);

        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_22);


        verticalLayout_7->addWidget(groupBox_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(false);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_sourceIgnoreDirs = new QLineEdit(tab_2);
        lineEdit_sourceIgnoreDirs->setObjectName(QString::fromUtf8("lineEdit_sourceIgnoreDirs"));

        horizontalLayout_5->addWidget(lineEdit_sourceIgnoreDirs);


        verticalLayout_3->addLayout(horizontalLayout_5);

        checkBox_enableDebugLog = new QCheckBox(tab_2);
        checkBox_enableDebugLog->setObjectName(QString::fromUtf8("checkBox_enableDebugLog"));

        verticalLayout_3->addWidget(checkBox_enableDebugLog);

        checkBox_globalProjConfig = new QCheckBox(tab_2);
        checkBox_globalProjConfig->setObjectName(QString::fromUtf8("checkBox_globalProjConfig"));

        verticalLayout_3->addWidget(checkBox_globalProjConfig);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_9->addWidget(label_16);

        spinBox_variableInfoWindowDelay = new QSpinBox(tab_2);
        spinBox_variableInfoWindowDelay->setObjectName(QString::fromUtf8("spinBox_variableInfoWindowDelay"));
        spinBox_variableInfoWindowDelay->setMaximum(99999);

        horizontalLayout_9->addWidget(spinBox_variableInfoWindowDelay);

        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_9->addWidget(label_18);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", nullptr));
        label_15->setText(QApplication::translate("SettingsDialog", "GUI Style:", nullptr));
        groupBox_2->setTitle(QApplication::translate("SettingsDialog", "Fonts", nullptr));
        label_2->setText(QApplication::translate("SettingsDialog", "Memory view font:", nullptr));
        pushButton_selectMemoryFont->setText(QApplication::translate("SettingsDialog", "...", nullptr));
        label_4->setText(QApplication::translate("SettingsDialog", "GDB output font:", nullptr));
        pushButton_selectGdbOutputFont->setText(QApplication::translate("SettingsDialog", "...", nullptr));
        label_29->setText(QApplication::translate("SettingsDialog", "Gede Output font:", nullptr));
        pushButton_selectGedeOutputFont->setText(QApplication::translate("SettingsDialog", "...", nullptr));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "Tag dropdown list", nullptr));
        label_14->setText(QApplication::translate("SettingsDialog", "Sort tags based on", nullptr));
        comboBox_sortTags->setItemText(0, QApplication::translate("SettingsDialog", "line number", nullptr));
        comboBox_sortTags->setItemText(1, QApplication::translate("SettingsDialog", "name", nullptr));

        checkBox_showLineNumbers->setText(QApplication::translate("SettingsDialog", "Show linenumbers", nullptr));
        label->setText(QApplication::translate("SettingsDialog", "Max opened tabs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gui), QApplication::translate("SettingsDialog", "GUI", nullptr));
        label_3->setText(QApplication::translate("SettingsDialog", "Sourceview font:", nullptr));
        pushButton_selectFont->setText(QApplication::translate("SettingsDialog", "...", nullptr));
        label_27->setText(QApplication::translate("SettingsDialog", "Tab indentation", nullptr));
        label_25->setText(QApplication::translate("SettingsDialog", "Current Line Style", nullptr));
        checkBox_showLineNo->setText(QApplication::translate("SettingsDialog", "Show linenumbers", nullptr));
        groupBox_991->setTitle(QApplication::translate("SettingsDialog", "Colors", nullptr));
        label_7->setText(QApplication::translate("SettingsDialog", "Comment", nullptr));
        pushButton_clr_foreground->setText(QString());
        pushButton_clr_comment->setText(QString());
        label_17->setText(QApplication::translate("SettingsDialog", "Current line", nullptr));
        label_8->setText(QApplication::translate("SettingsDialog", "String", nullptr));
        label_6->setText(QApplication::translate("SettingsDialog", "Background", nullptr));
        pushButton_clr_string->setText(QString());
        pushButton_clr_keyword->setText(QString());
        pushButton_clr_number->setText(QString());
        label_11->setText(QApplication::translate("SettingsDialog", "Cpp keyword", nullptr));
        label_12->setText(QApplication::translate("SettingsDialog", "Number", nullptr));
        label_13->setText(QApplication::translate("SettingsDialog", "Foreground text", nullptr));
        label_9->setText(QApplication::translate("SettingsDialog", "Inc string", nullptr));
        pushButton_clr_curLine->setText(QString());
        pushButton_clr_cppKeyword->setText(QString());
        pushButton_clr_incString->setText(QString());
        pushButton_clr_background->setText(QString());
        label_10->setText(QApplication::translate("SettingsDialog", "Keyword", nullptr));
        label_28->setText(QApplication::translate("SettingsDialog", "Selection", nullptr));
        pushButton_clr_selection->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialog", "Sourceview", nullptr));
        label_23->setText(QApplication::translate("SettingsDialog", "Scrollback", nullptr));
        label_24->setText(QApplication::translate("SettingsDialog", "Font", nullptr));
        pushButton_selectOutputFont->setText(QApplication::translate("SettingsDialog", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("SettingsDialog", "Colors", nullptr));
        pushButton_progConCursorClr->setText(QString());
        label_19->setText(QApplication::translate("SettingsDialog", "Background", nullptr));
        label_20->setText(QApplication::translate("SettingsDialog", "Cursor color", nullptr));
        pushButton_progConFgClr->setText(QString());
        pushButton_progConBgClr->setText(QString());
        label_26->setText(QApplication::translate("SettingsDialog", "Foreground", nullptr));
        groupBox_4->setTitle(QApplication::translate("SettingsDialog", "Palette", nullptr));
        pushButton_progConClrBright5->setText(QString());
        pushButton_progConClrBright7->setText(QString());
        pushButton_progConClrBright3->setText(QString());
        pushButton_progConClrBright2->setText(QString());
        pushButton_progConClrBright1->setText(QString());
        pushButton_progConClrBright8->setText(QString());
        pushButton_progConClrBright6->setText(QString());
        pushButton_progConClrBright4->setText(QString());
        pushButton_progConClrNormal1->setText(QString());
        pushButton_progConClrNormal2->setText(QString());
        pushButton_progConClrNormal3->setText(QString());
        pushButton_progConClrNormal4->setText(QString());
        pushButton_progConClrNormal5->setText(QString());
        pushButton_progConClrNormal6->setText(QString());
        pushButton_progConClrNormal7->setText(QString());
        pushButton_progConClrNormal8->setText(QString());
        groupBox_5->setTitle(QApplication::translate("SettingsDialog", "Compability", nullptr));
        label_21->setText(QApplication::translate("SettingsDialog", "Backspace key", nullptr));
        comboBox_backspaceKey->setItemText(0, QApplication::translate("SettingsDialog", "ASCII DEL", nullptr));
        comboBox_backspaceKey->setItemText(1, QApplication::translate("SettingsDialog", "ASCII BS", nullptr));
        comboBox_backspaceKey->setItemText(2, QApplication::translate("SettingsDialog", "Escape sequence", nullptr));

        comboBox_deleteKey->setItemText(0, QApplication::translate("SettingsDialog", "ASCII DEL", nullptr));
        comboBox_deleteKey->setItemText(1, QApplication::translate("SettingsDialog", "ASCII BS", nullptr));
        comboBox_deleteKey->setItemText(2, QApplication::translate("SettingsDialog", "Escape sequence", nullptr));

        label_22->setText(QApplication::translate("SettingsDialog", "Delete Key", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsDialog", "Target Console", nullptr));
        label_5->setText(QApplication::translate("SettingsDialog", "Ignore source directories:\n"
"(seperate dirs with ';' ) ", nullptr));
        checkBox_enableDebugLog->setText(QApplication::translate("SettingsDialog", "Enable debug log", nullptr));
        checkBox_globalProjConfig->setText(QApplication::translate("SettingsDialog", "Use global project file instead of one per project", nullptr));
        label_16->setText(QApplication::translate("SettingsDialog", "Variable info window delay", nullptr));
        label_18->setText(QApplication::translate("SettingsDialog", "ms (0=disable)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialog", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
