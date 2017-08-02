#include "abstractproduct.h"



AbstractProduct::AbstractProduct()
{
    qDebug() << "struct base Product";
}

AbstractProduct::~AbstractProduct()
{
     qDebug() << "destructor base product";
}

ProductA::ProductA()
{
    qDebug() << "struct  ProductA";
}

ProductA::~ProductA()
{
    qDebug() << "destructor  ProductA";
}

void ProductA::operation()
{
    qDebug() << "operation productA";
}

ProductB::ProductB()
{
  qDebug() << "struct  ProductB";
}

ProductB::~ProductB()
{
  qDebug() << "struct  ProductB";
}

void ProductB::operation()
{
  qDebug() << "struct  ProductB";
}
