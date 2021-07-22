#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

       //affichage image
    int w = ui ->label_pic->width();
    int h = ui ->label_pic->height();
    QPixmap img(":/ressource/img/login.png");
    ui->label_pic->setPixmap(img.scaled(w,h,Qt::KeepAspectRatio));

    //statusbar
    ui->statusbar->addPermanentWidget(ui->progressBar);
    ui->statusbar->addPermanentWidget(ui->label_3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_log_in_clicked()
{
    QString username = ui->username->text();
     QString password = ui->password->text();
    if(username == "Qannaf" && password == "Qannaf")
    {
        /*QMessageBox::information(this,"login","password and user is correct");

        hide();
        w2 = new Dialog(this);
        w2->show();*/
        ui->statusbar->showMessage("password and user is correct");
    }
    else
         ui->statusbar->showMessage("password and user is not correct",500);
         //QMessageBox::warning(this,"login","password and user is not correct");

}

