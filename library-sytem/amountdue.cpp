#include "amountdue.h"
#include "ui_amountdue.h"

amountdue::amountdue(QWidget *parent , int price) :
    QDialog(parent),
    ui(new Ui::amountdue)
{
    ui->setupUi(this);
    QString s =  QString::number(price);
    ui->textEdit->setText(s);

}

amountdue::~amountdue()
{
    delete ui;
}

void amountdue::on_pushButton_clicked()
{
    this->hide();
}

