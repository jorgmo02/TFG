/********************************************************************************
** Form generated from reading UI file 'processlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSLISTDIALOG_H
#define UI_PROCESSLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProcessListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProcessListDialog)
    {
        if (ProcessListDialog->objectName().isEmpty())
            ProcessListDialog->setObjectName(QString::fromUtf8("ProcessListDialog"));
        ProcessListDialog->resize(705, 468);
        verticalLayout = new QVBoxLayout(ProcessListDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(ProcessListDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSortingEnabled(true);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ProcessListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProcessListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProcessListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProcessListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProcessListDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcessListDialog)
    {
        ProcessListDialog->setWindowTitle(QApplication::translate("ProcessListDialog", "Process List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessListDialog: public Ui_ProcessListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSLISTDIALOG_H
