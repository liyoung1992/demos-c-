#pragma once
#include <iostream>
class Component {
public:
    Component() {};
    virtual ~Component() {};
    virtual void operation() = 0;
};
class ConcreteComponent :public Component {
public:
    ConcreteComponent() {};
    ~ConcreteComponent() {};
    void operation() {
        std::cout << "concreteCompent operation!" << std::endl;
    }
};