#ifndef SAMPLEFACTORY_H
#define SAMPLEFACTORY_H

#include <QMainWindow>
#include "abstractproduct.h"
#include <QDebug>

namespace Ui {
class SampleFactory;
}
//工厂基类
class AbstractFactory {
public:
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractProduct* createProduct(int type) = 0;
};

class SampleFactory : public QMainWindow,public AbstractFactory
{
    Q_OBJECT

public:
    explicit SampleFactory(QWidget *parent = 0);
    ~SampleFactory();

    AbstractProduct* createProduct(int type);

private slots:
    void on_createBtn_clicked();

private:
    Ui::SampleFactory *ui;
    AbstractFactory* m_pFactory;
};

#endif // SAMPLEFACTORY_H
