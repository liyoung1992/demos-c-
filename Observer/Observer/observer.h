#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <stdio.h>
#include <list>
using namespace std;

class Observer
{
public:
    Observer();
    virtual void update(int) = 0;
};
class Subject
{
public:
    Subject() {}
    virtual void Attach(Observer *) = 0;
    virtual void Detach(Observer *) = 0;
    virtual void Notify() = 0;
};

class ConcreteObserver1 :public Observer {
public:
    ConcreteObserver1(Subject *sub):m_pSubject(sub){}
    void update(int value);
private:
    Subject *m_pSubject;
};
class ConcreteObserver2 : public Observer {
public:
    ConcreteObserver2(Subject *sub):m_pSubject(sub){}
    void update(int value);
private:
    Subject *m_pSubject;
};
class ConcreteSubject : public Subject {
public:
    void Attach(Observer *ob);
    void Detach(Observer *ob);
    void Notify();

    void setState(int state);
private:
    list<Observer *> m_pObserverList;
    int m_pState;
};

#endif // OBSERVER_H
