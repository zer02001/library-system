#include "checkout.h"
#include "ui_checkout.h"

checkout::checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);

    MainWindow connect;
    QSqlQueryModel * modal = new QSqlQueryModel();
    connect.connOpen();
        
    QSqlQuery *  qry = new QSqlQuery(connect.mydb);
    qry-> prepare("select * from books ");
    qry->exec();
    modal-> setQuery(*qry);


    ui->comboBox->setModel(modal);

    connect.connClose();
    qDebug() << (modal->rowCount());







}

checkout::~checkout()
{
    delete ui;
}




void checkout::on_comboBox_currentIndexChanged(const QString &arg1)
{


    QString name = ui->comboBox->currentText();

    _name = name;

    MainWindow connect;

    connect.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from books where name='"+name+"' ");


    if (qry.exec()){

         while (qry.next()){

               ui->title->setText("Title: " + qry.value(0).toString());
               ui->price->setText("Price: "+ qry.value(1).toString());
               ui->status->setText("Status: "+ qry.value(2).toString());
               _price = qry.value(1).toInt();

           }


    connect.connClose();
}






}


void checkout::on_pushButton_clicked()
{
MainWindow conn;

conn.connOpen();
QSqlQuery qry;
qry.prepare("select * from books where name='"+_name+"'");

int amount = 0 ;



amount  = qry.value(1).toInt();



conn.connClose();







_price = amount;


this->hide();




}
int checkout::getprice(){






    return _price;
}
