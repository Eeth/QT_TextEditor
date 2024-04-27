#include "newfile.h"
#include "ui_newfile.h"

newfile::newfile(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::newfile)
{
    ui->setupUi(this);
}

newfile::~newfile()
{
    delete ui;
}
