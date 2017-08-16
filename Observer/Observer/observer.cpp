#include "observer.h"
#include <stdio.h>
#include <list>
Observer::Observer()
{

}

void ConcreteObserver1::update(int value)
{
 cout << "observer 1 is get the  update:state = "<<value << endl;
}

void ConcreteObserver2::update(int value)
{
    cout << "observer 2 is get the  update:state = "<<value <<endl;
}

void ConcreteSubject::Attach(Observer *ob)
{
    m_pObserverList.push_back(ob);
}

void ConcreteSubject::Detach(Observer *ob)
{
    m_pObserverList.remove(ob);
}

void ConcreteSubject::Notify()
{
    list<Observer *>::iterator it = m_pObserverList.begin();
    while(it != m_pObserverList.end()) {
        (*it)->update(m_pState);
        ++it;
    }
}

void ConcreteSubject::setState(int state)
{
    m_pState = state;
}
