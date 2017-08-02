#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

#include <QObject>
#include <stdio.h>
#include <QDebug>
//产品基类
class AbstractProduct
{
//    Q_OBJECT
public:
//    explicit AbstractProduct(QObject *parent = 0);
    AbstractProduct();
    virtual ~AbstractProduct();

    virtual void operation() = 0;
};

//产品A
class ProductA:public AbstractProduct {

public:
    ProductA();
    virtual ~ProductA();
    void operation();
};

//产品B
class ProductB :public AbstractProduct {
public:
    ProductB();
    virtual ~ProductB();
    void operation();
};



#endif // ABSTRACTPRODUCT_H
