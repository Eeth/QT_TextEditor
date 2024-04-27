/********************************************************************************
** Form generated from reading UI file 'thisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THISDIALOG_H
#define UI_THISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_thisDialog
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *thisDialog)
    {
        if (thisDialog->objectName().isEmpty())
            thisDialog->setObjectName("thisDialog");
        thisDialog->resize(484, 353);
        plainTextEdit = new QPlainTextEdit(thisDialog);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(100, 70, 281, 191));

        retranslateUi(thisDialog);

        QMetaObject::connectSlotsByName(thisDialog);
    } // setupUi

    void retranslateUi(QDialog *thisDialog)
    {
        thisDialog->setWindowTitle(QCoreApplication::translate("thisDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thisDialog: public Ui_thisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THISDIALOG_H
