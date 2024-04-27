#include "thisdialog.h"
#include "ui_thisdialog.h"

thisDialog::thisDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::thisDialog)
{
    ui->setupUi(this);
}

thisDialog::~thisDialog()
{
    delete ui;
}
