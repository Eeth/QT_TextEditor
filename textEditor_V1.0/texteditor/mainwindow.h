#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "textformat.h"
#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QTextCursor>




QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// Start of Text Format Classes (these all derive from the "TextFormatter" base class)


// Bold Class
class BoldTextFormatter : public TextFormatter {
public:
    BoldTextFormatter();

    void applyFormatting(QTextCursor &cursor) override;

private:
    bool boldEnabled;
};

//Underline Class
class UnderlineTextFormatter : public TextFormatter {
public:
    UnderlineTextFormatter();

    void applyFormatting(QTextCursor &cursor) override;

private:
    bool underlineEnabled;
};


//Italic Class
class ItalicTextFormatter : public TextFormatter {
public:
    ItalicTextFormatter();

    void applyFormatting(QTextCursor &cursor) override;

private:
    bool italicEnabled;
};

// End of Text Format Classes


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_actionNewfile_triggered();

    void on_actionBold_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionSave_triggered();

    void on_actionUnderline_triggered();

    void on_actionItalicize_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
    BoldTextFormatter boldFormatter;
    UnderlineTextFormatter underlineFormatter;
    ItalicTextFormatter italicFormatter;
};



#endif // MAINWINDOW_H
