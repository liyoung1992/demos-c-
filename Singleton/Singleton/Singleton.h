#ifndef SINGLETON_H
#define SINGLETON_H

#include <QMainWindow>

namespace Ui {
class Singleton;
}

class Singleton : public QMainWindow
{
    Q_OBJECT

public:
    explicit Singleton(QWidget *parent = 0);
    ~Singleton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Singleton *ui;
};

#endif // SINGLETON_H
