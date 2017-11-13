#pragma once
#include <iostream>
#include "component.h"
class Decorator {
public:
    Decorator() {};
    virtual ~Decorator() {};
    virtual void operation() {
        m_pComponent->operation();
    };
    virtual void setComonent(Component* comp) {
        m_pComponent = comp;
    };
private:
    Component* m_pComponent;
};
class ConcreteDecorator:public Decorator{
public:
    ConcreteDecorator() {};
    virtual ~ConcreteDecorator() {};
    virtual void addBehavior() {
        std::cout << "concreteDecorator addbehavior!" << std::endl;
    };
};
