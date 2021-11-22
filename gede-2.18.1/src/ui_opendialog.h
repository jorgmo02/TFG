/********************************************************************************
** Form generated from reading UI file 'opendialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENDIALOG_H
#define UI_OPENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "execombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *comboBox_projDir;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    ExeComboBox *comboBox_gdbCommand;
    QLabel *label;
    QLineEdit *lineEdit_program;
    QPushButton *pushButton_selectFile;
    QFrame *line;
    QRadioButton *radioButton_localProgram;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_arguments;
    QRadioButton *radioButton_gdbServerTcp;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_tcpHost;
    QLabel *label_4;
    QLineEdit *lineEdit_tcpPort;
    QCheckBox *checkBox_download;
    QRadioButton *radioButton_openCoreDump;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_coreFile;
    QPushButton *pushButton_selectCoreFile;
    QRadioButton *radioButton_runningProgram;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QLineEdit *lineEdit_pid;
    QPushButton *pushButton_runningPid;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_initialBreakpoint;
    QCheckBox *checkBox_reloadBreakpoints;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEdit_initCommands;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpenDialog)
    {
        if (OpenDialog->objectName().isEmpty())
            OpenDialog->setObjectName(QString::fromUtf8("OpenDialog"));
        OpenDialog->resize(638, 582);
        verticalLayout = new QVBoxLayout(OpenDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(OpenDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 6, -1, 6);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_5);

        comboBox_projDir = new QComboBox(tab);
        comboBox_projDir->setObjectName(QString::fromUtf8("comboBox_projDir"));
        comboBox_projDir->setEditable(true);

        horizontalLayout_2->addWidget(comboBox_projDir);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        comboBox_gdbCommand = new ExeComboBox(tab);
        comboBox_gdbCommand->setObjectName(QString::fromUtf8("comboBox_gdbCommand"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_gdbCommand->sizePolicy().hasHeightForWidth());
        comboBox_gdbCommand->setSizePolicy(sizePolicy1);
        comboBox_gdbCommand->setEditable(true);

        gridLayout_3->addWidget(comboBox_gdbCommand, 0, 2, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        lineEdit_program = new QLineEdit(tab);
        lineEdit_program->setObjectName(QString::fromUtf8("lineEdit_program"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_program->sizePolicy().hasHeightForWidth());
        lineEdit_program->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(lineEdit_program, 1, 2, 1, 1);

        pushButton_selectFile = new QPushButton(tab);
        pushButton_selectFile->setObjectName(QString::fromUtf8("pushButton_selectFile"));
        pushButton_selectFile->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(pushButton_selectFile, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        radioButton_localProgram = new QRadioButton(tab);
        radioButton_localProgram->setObjectName(QString::fromUtf8("radioButton_localProgram"));

        verticalLayout_2->addWidget(radioButton_localProgram);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(15, -1, -1, -1);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_arguments = new QLineEdit(tab);
        lineEdit_arguments->setObjectName(QString::fromUtf8("lineEdit_arguments"));

        gridLayout->addWidget(lineEdit_arguments, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        radioButton_gdbServerTcp = new QRadioButton(tab);
        radioButton_gdbServerTcp->setObjectName(QString::fromUtf8("radioButton_gdbServerTcp"));

        verticalLayout_2->addWidget(radioButton_gdbServerTcp);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(15, -1, -1, -1);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_tcpHost = new QLineEdit(tab);
        lineEdit_tcpHost->setObjectName(QString::fromUtf8("lineEdit_tcpHost"));

        gridLayout_2->addWidget(lineEdit_tcpHost, 0, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_tcpPort = new QLineEdit(tab);
        lineEdit_tcpPort->setObjectName(QString::fromUtf8("lineEdit_tcpPort"));

        gridLayout_2->addWidget(lineEdit_tcpPort, 1, 1, 1, 1);

        checkBox_download = new QCheckBox(tab);
        checkBox_download->setObjectName(QString::fromUtf8("checkBox_download"));

        gridLayout_2->addWidget(checkBox_download, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        radioButton_openCoreDump = new QRadioButton(tab);
        radioButton_openCoreDump->setObjectName(QString::fromUtf8("radioButton_openCoreDump"));

        verticalLayout_2->addWidget(radioButton_openCoreDump);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 3, 0, 1, 1);

        lineEdit_coreFile = new QLineEdit(tab);
        lineEdit_coreFile->setObjectName(QString::fromUtf8("lineEdit_coreFile"));

        gridLayout_4->addWidget(lineEdit_coreFile, 3, 2, 1, 1);

        pushButton_selectCoreFile = new QPushButton(tab);
        pushButton_selectCoreFile->setObjectName(QString::fromUtf8("pushButton_selectCoreFile"));

        gridLayout_4->addWidget(pushButton_selectCoreFile, 3, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        radioButton_runningProgram = new QRadioButton(tab);
        radioButton_runningProgram->setObjectName(QString::fromUtf8("radioButton_runningProgram"));

        verticalLayout_2->addWidget(radioButton_runningProgram);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        lineEdit_pid = new QLineEdit(tab);
        lineEdit_pid->setObjectName(QString::fromUtf8("lineEdit_pid"));

        gridLayout_5->addWidget(lineEdit_pid, 0, 1, 1, 1);

        pushButton_runningPid = new QPushButton(tab);
        pushButton_runningPid->setObjectName(QString::fromUtf8("pushButton_runningPid"));

        gridLayout_5->addWidget(pushButton_runningPid, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_5);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        lineEdit_initialBreakpoint = new QLineEdit(tab);
        lineEdit_initialBreakpoint->setObjectName(QString::fromUtf8("lineEdit_initialBreakpoint"));

        horizontalLayout->addWidget(lineEdit_initialBreakpoint);


        verticalLayout_2->addLayout(horizontalLayout);

        checkBox_reloadBreakpoints = new QCheckBox(tab);
        checkBox_reloadBreakpoints->setObjectName(QString::fromUtf8("checkBox_reloadBreakpoints"));

        verticalLayout_2->addWidget(checkBox_reloadBreakpoints);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plainTextEdit_initCommands = new QPlainTextEdit(groupBox);
        plainTextEdit_initCommands->setObjectName(QString::fromUtf8("plainTextEdit_initCommands"));

        verticalLayout_4->addWidget(plainTextEdit_initCommands);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(OpenDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(radioButton_localProgram, lineEdit_arguments);
        QWidget::setTabOrder(lineEdit_arguments, radioButton_gdbServerTcp);
        QWidget::setTabOrder(radioButton_gdbServerTcp, lineEdit_tcpHost);
        QWidget::setTabOrder(lineEdit_tcpHost, lineEdit_tcpPort);
        QWidget::setTabOrder(lineEdit_tcpPort, checkBox_download);
        QWidget::setTabOrder(checkBox_download, radioButton_openCoreDump);
        QWidget::setTabOrder(radioButton_openCoreDump, lineEdit_coreFile);
        QWidget::setTabOrder(lineEdit_coreFile, pushButton_selectCoreFile);
        QWidget::setTabOrder(pushButton_selectCoreFile, lineEdit_initialBreakpoint);
        QWidget::setTabOrder(lineEdit_initialBreakpoint, checkBox_reloadBreakpoints);
        QWidget::setTabOrder(checkBox_reloadBreakpoints, buttonBox);
        QWidget::setTabOrder(buttonBox, tabWidget);
        QWidget::setTabOrder(tabWidget, plainTextEdit_initCommands);

        retranslateUi(OpenDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OpenDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OpenDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OpenDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenDialog)
    {
        OpenDialog->setWindowTitle(QApplication::translate("OpenDialog", "Settings", nullptr));
        label_5->setText(QApplication::translate("OpenDialog", "Project dir", nullptr));
        label_6->setText(QApplication::translate("OpenDialog", "GDB", nullptr));
#ifndef QT_NO_TOOLTIP
        comboBox_gdbCommand->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>GDB executable to use.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OpenDialog", "Program", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_program->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>Program to debug</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_selectFile->setText(QApplication::translate("OpenDialog", "...", nullptr));
        radioButton_localProgram->setText(QApplication::translate("OpenDialog", "Launch program", nullptr));
        label_2->setText(QApplication::translate("OpenDialog", "Arguments", nullptr));
        radioButton_gdbServerTcp->setText(QApplication::translate("OpenDialog", "Connect to GDB server through TCP", nullptr));
        label_3->setText(QApplication::translate("OpenDialog", "Remotehost", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_tcpHost->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>IP address or hostname of gdb server</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OpenDialog", "Port", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBox_download->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>Download program before starting debugging.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBox_download->setText(QApplication::translate("OpenDialog", "Download", nullptr));
        radioButton_openCoreDump->setText(QApplication::translate("OpenDialog", "Open a core dump", nullptr));
        label_9->setText(QApplication::translate("OpenDialog", "Core", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_coreFile->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>Core dump file to debug.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_selectCoreFile->setText(QApplication::translate("OpenDialog", "...", nullptr));
        radioButton_runningProgram->setText(QApplication::translate("OpenDialog", "Connect to running process", nullptr));
        label_11->setText(QApplication::translate("OpenDialog", "Process PID", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_pid->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>PID of process to debug.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_runningPid->setText(QApplication::translate("OpenDialog", "...", nullptr));
        label_7->setText(QApplication::translate("OpenDialog", "Initial breakpoint at function:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_initialBreakpoint->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>Add an breakpoint at this address.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBox_reloadBreakpoints->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>Reset the breakpoints that was used in previous run.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBox_reloadBreakpoints->setText(QApplication::translate("OpenDialog", "Use breakpoints from last run", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("OpenDialog", "General", nullptr));
        groupBox->setTitle(QApplication::translate("OpenDialog", "Initialization commands", nullptr));
#ifndef QT_NO_TOOLTIP
        plainTextEdit_initCommands->setToolTip(QApplication::translate("OpenDialog", "<html><head/><body><p>Enter commands to send to GDB.<br/>One line per command.<br/>Comments can be added by preceding them with '#'.</p><p>Example:</p><p><span style=\" font-style:italic;\"># Change source path<br/>set substitute-path '/path/my_source' '/new_path'</span></p><p><span style=\" font-style:italic;\"># Halt target<br/>monitor reset halt.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("OpenDialog", "Commands", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenDialog: public Ui_OpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENDIALOG_H
