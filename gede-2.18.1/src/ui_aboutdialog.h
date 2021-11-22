/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_version;
    QFrame *line;
    QLabel *label_buildDate;
    QLabel *label_qtVersion;
    QLabel *label_gdbPath;
    QLabel *label_os;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(376, 237);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_version = new QLabel(AboutDialog);
        label_version->setObjectName(QString::fromUtf8("label_version"));

        verticalLayout->addWidget(label_version);

        line = new QFrame(AboutDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_buildDate = new QLabel(AboutDialog);
        label_buildDate->setObjectName(QString::fromUtf8("label_buildDate"));

        verticalLayout->addWidget(label_buildDate);

        label_qtVersion = new QLabel(AboutDialog);
        label_qtVersion->setObjectName(QString::fromUtf8("label_qtVersion"));

        verticalLayout->addWidget(label_qtVersion);

        label_gdbPath = new QLabel(AboutDialog);
        label_gdbPath->setObjectName(QString::fromUtf8("label_gdbPath"));

        verticalLayout->addWidget(label_gdbPath);

        label_os = new QLabel(AboutDialog);
        label_os->setObjectName(QString::fromUtf8("label_os"));

        verticalLayout->addWidget(label_os);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Gede", nullptr));
        label->setText(QApplication::translate("AboutDialog", "Gede is written by Johan Henriksson", nullptr));
        label_2->setText(QApplication::translate("AboutDialog", "Copyright (C) 2014-2017", nullptr));
        label_version->setText(QApplication::translate("AboutDialog", "Version: ", nullptr));
        label_buildDate->setText(QApplication::translate("AboutDialog", "<Build Date>", nullptr));
        label_qtVersion->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>&lt;Qt version&gt;</p></body></html>", nullptr));
        label_gdbPath->setText(QApplication::translate("AboutDialog", "<Gdb Path>", nullptr));
        label_os->setText(QApplication::translate("AboutDialog", "<OS>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
