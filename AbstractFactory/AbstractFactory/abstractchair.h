#ifndef ABSTRACTCHAIR_H
#define ABSTRACTCHAIR_H

#include <QObject>

class AbstractChair : public QObject
{
    Q_OBJECT
public:
//    explicit AbstractChair(QObject *parent = 0);
    AbstractChair();
    virtual ~AbstractChair();

    virtual void operation() = 0 ;

signals:

public slots:
};

class WhiteChair :public AbstractChair {
public:
    WhiteChair();
    virtual ~WhiteChair();

    void operation();
};

class BlackChair:public AbstractChair {
public:
    BlackChair();
    virtual ~BlackChair();

    void operation();
};

#endif // ABSTRACTCHAIR_H
