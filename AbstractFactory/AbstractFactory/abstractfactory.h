#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <QObject>
#include "abstractchair.h"
#include "abstracttable.h"

class AbstractFactory : public QObject
{
    Q_OBJECT
public:
//    explicit AbstractFactory(QObject *parent = 0);
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractTable* createTable() = 0;
    virtual AbstractChair* createChair() = 0;

signals:

public slots:
};

class WhiteFactory : public AbstractFactory {
public:
    WhiteFactory();
    virtual ~WhiteFactory();

    AbstractTable* createTable();
    AbstractChair* createChair();
};

class BlackFactory: public AbstractFactory {
public:
    BlackFactory();
    virtual ~BlackFactory();

    AbstractTable* createTable();
    AbstractChair* createChair();
};

#endif // ABSTRACTFACTORY_H
