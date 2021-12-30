#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    checkout employeeinfo;
    employeeinfo.setModal(true);
    employeeinfo.exec();
    amount = employeeinfo.getprice();
}


void MainWindow::on_pushButton_2_clicked()
{
   bookslist books;
   books.setModal(true);
   books.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    amountdue amountz ( this , amount);
    amountz.setModal(true);
    amountz.exec();
}

