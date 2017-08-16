#include "mainwindow.h"
#include <QApplication>
#include "observer.h"

int main(int argc, char *argv[])
{
      QApplication a(argc, argv);

      ConcreteSubject *pSubject = new ConcreteSubject();


      Observer *pObserver1 = new ConcreteObserver1(pSubject);
      Observer *pObserver2 = new ConcreteObserver2(pSubject);


      pSubject->setState(2);


      pSubject->Attach(pObserver1);
      pSubject->Attach(pObserver2);

      pSubject->Notify();

      pSubject->Detach(pObserver1);

      pSubject->setState(3);
      pSubject->Notify();

      delete pObserver1;
      delete pObserver2;
      delete pSubject;

    return a.exec();
}
