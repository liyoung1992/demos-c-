#ifndef ABSTRACTTABLE_H
#define ABSTRACTTABLE_H

#include <QObject>
#include <QDebug>

class AbstractTable : public QObject
{
    Q_OBJECT
public:
//    explicit AbstractTable(QObject *parent = 0);
    AbstractTable();
    virtual ~AbstractTable();

    virtual void operation() = 0;
signals:

public slots:
};
class WhiteTable:public AbstractTable {
public:
    WhiteTable();
    virtual ~WhiteTable();

    void operation();
};

class BlackTable :public AbstractTable {
public:
    BlackTable();
    virtual ~BlackTable();

    void operation();
};

#endif // ABSTRACTTABLE_H
