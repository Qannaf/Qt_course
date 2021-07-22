#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);

    ui->comboBox->addItem(QIcon(":/ressource/img/valide.png"),"Qannaf");
    ui->comboBox->addItem(QIcon(":/ressource/img/exit.jpg"),"Niko");
    ui->comboBox->addItem(QIcon(":/ressource/img/valide.png"),"David");
    ui->comboBox->addItem(QIcon(":/ressource/img/exit.jpg"),"moh");
    ui->comboBox->addItem(QIcon(":/ressource/img/valide.png"),"Adam");
    ui->comboBox->addItem(QIcon(":/ressource/img/valide.png"),"tamer");

    for(int i = 0;i<5;i++)
        ui->comboBox->addItem(QIcon(":/ressource/img/valide.png"),QString::number(i)+" user");
    ui->comboBox->insertItem(3,QIcon(":/ressource/img/valide.png"),"insert");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   if( ui->checkBox->isChecked())
       QMessageBox::information(this,"title","Yes");
   else
        QMessageBox::information(this,"title","NO");

}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if( arg1)
        QMessageBox::information(this,"title","Yes");
    else
         QMessageBox::information(this,"title","NO");
}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->radioButton->isChecked())
         QMessageBox::information(this,"title","cats");
    if(ui->radioButton_2->isChecked())
         QMessageBox::information(this,"title","dogs");
}


void MainWindow::on_pushButton_3_clicked()
{
    if(ui->radioButton_3->isChecked())
         QMessageBox::information(this,"title","Appels");
    if(ui->radioButton_4->isChecked())
         QMessageBox::information(this,"title","Dogs");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"title",ui->comboBox->currentText());
}

