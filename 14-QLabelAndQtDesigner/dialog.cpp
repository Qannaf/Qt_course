#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText("<b>Hello, My name is Qannaf<b>");
}

Dialog::~Dialog()
{
    delete ui;
}
