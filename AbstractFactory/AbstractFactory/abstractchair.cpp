#include "abstractchair.h"
#include <QDebug>
//AbstractChair::AbstractChair(QObject *parent) : QObject(parent)
//{

//}

AbstractChair::AbstractChair()
{

}

AbstractChair::~AbstractChair()
{

}

WhiteChair::WhiteChair()
{

}

WhiteChair::~WhiteChair()
{

}

void WhiteChair::operation()
{
 qDebug() << "white Chair";
}

BlackChair::BlackChair()
{

}

BlackChair::~BlackChair()
{

}

void BlackChair::operation()
{
    qDebug() << "black Chair";
}
