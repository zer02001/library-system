#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class checkout;
}

class checkout : public QDialog
{
    Q_OBJECT

public:
QString _name;
int _price;
    explicit checkout(QWidget *parent = nullptr);
    ~checkout();
int getprice();
private slots:




    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::checkout *ui;
};

#endif // CHECKOUT_H
