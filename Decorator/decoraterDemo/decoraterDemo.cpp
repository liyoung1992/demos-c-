// decoraterDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "component.h"
#include "Decorator.h"

int main()
{
    Component* m_pComp = new ConcreteComponent();
    ConcreteDecorator* m_pDec = new ConcreteDecorator();
    m_pDec->setComonent(m_pComp);
    m_pDec->operation();
    m_pDec->addBehavior();
    delete m_pDec;
    delete m_pComp;
    system("pause");
    return 0;
}

