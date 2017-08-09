#include "abstracttable.h"

//AbstractTable::AbstractTable(QObject *parent) : QObject(parent)
//{

//}

AbstractTable::AbstractTable()
{

}

AbstractTable::~AbstractTable()
{

}

WhiteTable::WhiteTable()
{

}

WhiteTable::~WhiteTable()
{

}

void WhiteTable::operation()
{
    qDebug() << "white table";
}

BlackTable::BlackTable()
{

}

BlackTable::~BlackTable()
{

}

void BlackTable::operation()
{
    qDebug() << "black table";
}
