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


//Bold Functions

BoldTextFormatter::BoldTextFormatter() : boldEnabled(false) {}

void BoldTextFormatter::applyFormatting(QTextCursor &cursor) {
    QTextCharFormat format;
    boldEnabled = !boldEnabled; // Toggle bold state
    format.setFontWeight(boldEnabled ? QFont::Bold : QFont::Normal); // Apply formatting
    cursor.mergeCharFormat(format);
}

void MainWindow::on_actionBold_triggered() {
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    boldFormatter.applyFormatting(cursor); // Apply bold formatting
    ui->plainTextEdit->setTextCursor(cursor);
}


//Underline Functions

UnderlineTextFormatter::UnderlineTextFormatter() : underlineEnabled(false) {}

void UnderlineTextFormatter::applyFormatting(QTextCursor &cursor) {
    QTextCharFormat format;
    underlineEnabled = !underlineEnabled; // Toggle underline state
    format.setFontUnderline(underlineEnabled); // Apply formatting
    cursor.mergeCharFormat(format);
}


void MainWindow::on_actionUnderline_triggered() {
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    underlineFormatter.applyFormatting(cursor); // Apply bold formatting
    ui->plainTextEdit->setTextCursor(cursor);
}


//Italic functions

ItalicTextFormatter::ItalicTextFormatter() : italicEnabled(false) {}


void ItalicTextFormatter::applyFormatting(QTextCursor &cursor) {
    QTextCharFormat format;
    italicEnabled = !italicEnabled; // Toggle italic state
    format.setFontItalic(italicEnabled); // Apply formatting
    cursor.mergeCharFormat(format);
}


void MainWindow::on_actionItalicize_triggered() {
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    italicFormatter.applyFormatting(cursor); // Apply bold formatting
    ui->plainTextEdit->setTextCursor(cursor);
}
