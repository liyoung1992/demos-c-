#ifndef ABSTRACTFRUIT_H
#define ABSTRACTFRUIT_H


//抽象水果
class AbstractFruit
{
public:
    AbstractFruit();
    virtual ~AbstractFruit();

    virtual void operation() = 0;
};

class Apple:public AbstractFruit {
public:
    Apple();
    virtual ~Apple();

    void operation();
};
class Banana :public AbstractFruit {
public:
    Banana();
    virtual ~Banana();

    void operation();
};

#endif // ABSTRACTFRUIT_H
