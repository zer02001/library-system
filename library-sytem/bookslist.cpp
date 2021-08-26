#include "bookslist.h"
#include "ui_bookslist.h"
#include"mainwindow.h"
bookslist::bookslist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookslist)
{
    ui->setupUi(this);
    MainWindow connect;
QSqlQueryModel * modal = new QSqlQueryModel();
connect.connOpen();
QSqlQuery *  qry = new QSqlQuery(connect.mydb);

qry-> prepare("select * from books ");
qry->exec();
modal-> setQuery(*qry);


  ui->tableView-> setModel(modal);

  connect.connClose();
  qDebug() << (modal->rowCount());
}

bookslist::~bookslist()
{
    delete ui;
}
