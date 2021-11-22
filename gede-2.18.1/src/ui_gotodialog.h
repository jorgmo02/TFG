/********************************************************************************
** Form generated from reading UI file 'gotodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTODIALOG_H
#define UI_GOTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GoToDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *labelHelp;
    QListWidget *listWidget;

    void setupUi(QDialog *GoToDialog)
    {
        if (GoToDialog->objectName().isEmpty())
            GoToDialog->setObjectName(QString::fromUtf8("GoToDialog"));
        GoToDialog->resize(375, 146);
        GoToDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(GoToDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(GoToDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(GoToDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        labelHelp = new QLabel(GoToDialog);
        labelHelp->setObjectName(QString::fromUtf8("labelHelp"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(7);
        labelHelp->setFont(font);

        verticalLayout->addWidget(labelHelp);

        listWidget = new QListWidget(GoToDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(true);
        listWidget->setBatchSize(200);
        listWidget->setSelectionRectVisible(false);
        listWidget->setSortingEnabled(true);

        verticalLayout->addWidget(listWidget);


        retranslateUi(GoToDialog);

        QMetaObject::connectSlotsByName(GoToDialog);
    } // setupUi

    void retranslateUi(QDialog *GoToDialog)
    {
        GoToDialog->setWindowTitle(QApplication::translate("GoToDialog", "Go To Line", nullptr));
        pushButton->setText(QApplication::translate("GoToDialog", "Go", nullptr));
        labelHelp->setText(QApplication::translate("GoToDialog", "(help)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoToDialog: public Ui_GoToDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTODIALOG_H
