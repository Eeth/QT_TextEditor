#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTextEdit>
#include <QApplication>
#include <QLabel>
#include <QTextCharFormat>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui -> plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNewfile_triggered()
{
    currentFile.clear();
    ui->plainTextEdit->setPlainText(QString());

}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open");
    QFile file(filename);
    currentFile = filename;

    //error
    if (!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
        return;
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();

    ui->plainTextEdit->setPlainText(text);
    file.close();
}

void MainWindow::on_actionSave_As_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save As");
    QFile file(filename);
    //error
    if (!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file : " + file.errorString());
        return;
    }
    currentFile = filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();

    out << text;

    file.close();
}

void MainWindow::on_actionSave_triggered()
{   if(currentFile == ""){
        MainWindow::on_actionSave_As_triggered();
    }
    QFile file(currentFile);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        QString text = ui->plainTextEdit->toPlainText();
        out << text;
        file.close();
    }
}

void MainWindow::on_actionBold_triggered()
{
    // Gets the current highlighted text
    QTextCursor cursor = ui->plainTextEdit->textCursor();

    // Creates and stores the variable for the current text format
    QTextCharFormat format = cursor.charFormat();

    // Create bold format
    format.setFontWeight(format.fontWeight() == QFont::Bold ? QFont::Normal : QFont::Bold);

    // Apply the created bold format to the selected text
    cursor.mergeCharFormat(format);


    ui->plainTextEdit->setTextCursor(cursor);
}










