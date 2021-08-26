#ifndef BOOKSLIST_H
#define BOOKSLIST_H

#include <QDialog>

namespace Ui {
class bookslist;
}

class bookslist : public QDialog
{
    Q_OBJECT

public:
    explicit bookslist(QWidget *parent = nullptr);
    ~bookslist();

private:
    Ui::bookslist *ui;
};

#endif // BOOKSLIST_H
