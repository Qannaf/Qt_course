#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir dir("G:/Utilisateurs/qannaf.as/Desktop/Qannaf");
    //if(dir.exists()) QMessageBox::information(this,"title","Yes, dir exist");
    //else             QMessageBox::information(this,"title","No, dir not exist");

    foreach(QFileInfo var,dir.drives())
        ui->comboBox->addItem(var.absoluteFilePath());

    QDir dir_2("G:/Utilisateurs/qannaf.as/Desktop/qdir");
    foreach(QFileInfo var,dir_2.entryInfoList())
    {
        if(var.isDir()) ui->listWidget->addItem("Dir :"+var.absoluteFilePath());
        if(var.isFile()) ui->listWidget->addItem("File :"+var.absoluteFilePath());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QDir dir("G:/Utilisateurs/qannaf.as/Desktop/qdir/no");
    if(dir.exists()) QMessageBox::information(this,"title","Yes, dir exist");
    else
    {  QMessageBox::StandardButton reply;
        reply  = QMessageBox::question(this,"title","No, dir do not exist do you crate it?");
        if( reply == QMessageBox::Yes )
        {
            dir.mkpath("G:/Utilisateurs/qannaf.as/Desktop/qdir/no");
            QMessageBox::warning(this, "Title Here", "Be careful");
        }
        else
            QMessageBox::information(this, "Title Here",
                                         "we do not create it :)");
    }

}


