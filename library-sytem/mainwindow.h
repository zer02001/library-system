#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>
#include <QtDebug>
#include <QMainWindow>
#include <QFileInfo>
#include "bookslist.h"
#include "checkout.h"
#include "amountdue.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
int amount = 0;
    void connClose(){

mydb.close();
mydb.removeDatabase(QSqlDatabase::defaultConnection);

    }
    bool connOpen(){

        mydb = QSqlDatabase::addDatabase("QSQLITE");
       mydb.setDatabaseName("C:/Users/alibi/Desktop/database/database.db");

       if(!mydb.open()){
           qDebug()<<("failed to open");
        return false;
       }
        else{

            qDebug()<< ("connected...");
            return true;


        }
    }



    QSqlDatabase mydb;



public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
