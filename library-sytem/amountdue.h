#ifndef AMOUNTDUE_H
#define AMOUNTDUE_H

#include <QDialog>

namespace Ui {
class amountdue;
}

class amountdue : public QDialog
{
    Q_OBJECT

public:
    explicit amountdue(QWidget *parent = nullptr, int price=0);
    ~amountdue();

private slots:
    void on_pushButton_clicked();

private:
    Ui::amountdue *ui;
};

#endif // AMOUNTDUE_H
