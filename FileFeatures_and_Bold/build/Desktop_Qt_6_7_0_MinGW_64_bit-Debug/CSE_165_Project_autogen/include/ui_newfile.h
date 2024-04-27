/********************************************************************************
** Form generated from reading UI file 'newfile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILE_H
#define UI_NEWFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_newFile
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *newFile)
    {
        if (newFile->objectName().isEmpty())
            newFile->setObjectName("newFile");
        newFile->resize(400, 300);
        plainTextEdit = new QPlainTextEdit(newFile);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(newFile);

        QMetaObject::connectSlotsByName(newFile);
    } // setupUi

    void retranslateUi(QDialog *newFile)
    {
        newFile->setWindowTitle(QCoreApplication::translate("newFile", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFile: public Ui_newFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILE_H
