#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/res/img/valide.png"),"Qannaf");
    ui->listWidget->addItem(item1);

    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/res/img/valide.png"),"AL-SAHMI");
    ui->listWidget->addItem(item2);

    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/res/img/exit.jpg"),"item3");
    ui->listWidget->addItem(item3);

    QListWidgetItem *item4 = new QListWidgetItem(QIcon(":/res/img/exit.jpg"),"item4");
    ui->listWidget->addItem(item4);
    ui->listWidget->addItem("item5");



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //QString  text = ui->listWidget->currentItem()->text();
    //QMessageBox::information(this,"title",text);

    ui->listWidget->currentItem()->setBackground(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::yellow);
}

