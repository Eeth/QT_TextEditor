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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newfile
{
public:
    QAction *actionNew_File;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newfile)
    {
        if (newfile->objectName().isEmpty())
            newfile->setObjectName("newfile");
        newfile->resize(800, 600);
        actionNew_File = new QAction(newfile);
        actionNew_File->setObjectName("actionNew_File");
        centralwidget = new QWidget(newfile);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(150, 100, 411, 291));
        newfile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newfile);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        newfile->setMenuBar(menubar);
        statusbar = new QStatusBar(newfile);
        statusbar->setObjectName("statusbar");
        newfile->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_File);

        retranslateUi(newfile);

        QMetaObject::connectSlotsByName(newfile);
    } // setupUi

    void retranslateUi(QMainWindow *newfile)
    {
        newfile->setWindowTitle(QCoreApplication::translate("newfile", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("newfile", "New File", nullptr));
        menuFile->setTitle(QCoreApplication::translate("newfile", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newfile: public Ui_newfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILE_H
