#ifndef THISDIALOG_H
#define THISDIALOG_H

#include <QDialog>

namespace Ui {
class thisDialog;
}

class thisDialog : public QDialog
{
    Q_OBJECT

public:
    explicit thisDialog(QWidget *parent = nullptr);
    ~thisDialog();

private:
    Ui::thisDialog *ui;
};

#endif // THISDIALOG_H
