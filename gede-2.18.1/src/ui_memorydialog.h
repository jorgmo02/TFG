/********************************************************************************
** Form generated from reading UI file 'memorydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORYDIALOG_H
#define UI_MEMORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>
#include "memorywidget.h"

QT_BEGIN_NAMESPACE

class Ui_MemoryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_address;
    QPushButton *pushButton_update;
    QHBoxLayout *horizontalLayout;
    MemoryWidget *memorywidget;
    QScrollBar *verticalScrollBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MemoryDialog)
    {
        if (MemoryDialog->objectName().isEmpty())
            MemoryDialog->setObjectName(QString::fromUtf8("MemoryDialog"));
        MemoryDialog->setWindowModality(Qt::ApplicationModal);
        MemoryDialog->resize(833, 587);
        MemoryDialog->setModal(true);
        verticalLayout = new QVBoxLayout(MemoryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(MemoryDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_address = new QLineEdit(MemoryDialog);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        horizontalLayout_2->addWidget(lineEdit_address);

        pushButton_update = new QPushButton(MemoryDialog);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));

        horizontalLayout_2->addWidget(pushButton_update);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        memorywidget = new MemoryWidget(MemoryDialog);
        memorywidget->setObjectName(QString::fromUtf8("memorywidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(memorywidget->sizePolicy().hasHeightForWidth());
        memorywidget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(memorywidget);

        verticalScrollBar = new QScrollBar(MemoryDialog);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalScrollBar);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(MemoryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MemoryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MemoryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MemoryDialog, SLOT(reject()));

        pushButton_update->setDefault(true);


        QMetaObject::connectSlotsByName(MemoryDialog);
    } // setupUi

    void retranslateUi(QDialog *MemoryDialog)
    {
        MemoryDialog->setWindowTitle(QApplication::translate("MemoryDialog", "Memory", nullptr));
        label->setText(QApplication::translate("MemoryDialog", "Address", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_address->setToolTip(QApplication::translate("MemoryDialog", "<html><head/><body><p>Address in hex. Example 0x23.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_update->setText(QApplication::translate("MemoryDialog", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemoryDialog: public Ui_MemoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORYDIALOG_H
