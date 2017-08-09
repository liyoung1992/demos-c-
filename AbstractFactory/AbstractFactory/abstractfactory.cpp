#include "abstractfactory.h"

//AbstractFactory::AbstractFactory(QObject *parent) : QObject(parent)
//{

//}

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}



WhiteFactory::WhiteFactory()
{

}

WhiteFactory::~WhiteFactory()
{

}

AbstractTable* WhiteFactory::createTable()
{
    AbstractTable* temp = new WhiteTable();
    return temp;
}

AbstractChair *WhiteFactory::createChair()
{
    AbstractChair* temp = new WhiteChair();
    return temp;
}

BlackFactory::BlackFactory()
{

}

BlackFactory::~BlackFactory()
{

}

AbstractTable *BlackFactory::createTable()
{
    AbstractTable* temp = new BlackTable();
    return temp;
}

AbstractChair *BlackFactory::createChair()
{
    AbstractChair *temp = new BlackChair();
    return temp;
}
