/********************************************************************************
** Form generated from reading UI file 'filenew.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILENEW_H
#define UI_FILENEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_fileNew
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *fileNew)
    {
        if (fileNew->objectName().isEmpty())
            fileNew->setObjectName("fileNew");
        fileNew->resize(400, 300);
        plainTextEdit = new QPlainTextEdit(fileNew);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 10, 401, 291));

        retranslateUi(fileNew);

        QMetaObject::connectSlotsByName(fileNew);
    } // setupUi

    void retranslateUi(QDialog *fileNew)
    {
        fileNew->setWindowTitle(QCoreApplication::translate("fileNew", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fileNew: public Ui_fileNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILENEW_H
