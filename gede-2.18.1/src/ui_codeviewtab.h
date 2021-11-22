/********************************************************************************
** Form generated from reading UI file 'codeviewtab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEVIEWTAB_H
#define UI_CODEVIEWTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "codeview.h"

QT_BEGIN_NAMESPACE

class Ui_CodeViewTab
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_funcList;
    QScrollArea *scrollArea_codeView;
    CodeView *codeView;

    void setupUi(QWidget *CodeViewTab)
    {
        if (CodeViewTab->objectName().isEmpty())
            CodeViewTab->setObjectName(QString::fromUtf8("CodeViewTab"));
        CodeViewTab->resize(771, 525);
        verticalLayout = new QVBoxLayout(CodeViewTab);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_funcList = new QComboBox(CodeViewTab);
        comboBox_funcList->setObjectName(QString::fromUtf8("comboBox_funcList"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_funcList->sizePolicy().hasHeightForWidth());
        comboBox_funcList->setSizePolicy(sizePolicy);
        comboBox_funcList->setMinimumSize(QSize(20, 0));

        verticalLayout->addWidget(comboBox_funcList);

        scrollArea_codeView = new QScrollArea(CodeViewTab);
        scrollArea_codeView->setObjectName(QString::fromUtf8("scrollArea_codeView"));
        scrollArea_codeView->setWidgetResizable(true);
        codeView = new CodeView();
        codeView->setObjectName(QString::fromUtf8("codeView"));
        codeView->setGeometry(QRect(0, 0, 769, 500));
        scrollArea_codeView->setWidget(codeView);

        verticalLayout->addWidget(scrollArea_codeView);


        retranslateUi(CodeViewTab);

        QMetaObject::connectSlotsByName(CodeViewTab);
    } // setupUi

    void retranslateUi(QWidget *CodeViewTab)
    {
        CodeViewTab->setWindowTitle(QApplication::translate("CodeViewTab", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeViewTab: public Ui_CodeViewTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEVIEWTAB_H
