#ifndef ABSTRACTFARM_H
#define ABSTRACTFARM_H
#include "abstractfruit.h"

class AbstractFarm
{
public:
    AbstractFarm();
    virtual ~AbstractFarm();

    virtual AbstractFruit* createFruit() = 0;

};

class AppleFarm : public AbstractFarm {
public:
    AppleFarm();
    virtual ~AppleFarm();

    AbstractFruit* createFruit();
};

class BananaFarm : public AbstractFarm {
public:
      BananaFarm();
      virtual ~BananaFarm();

      AbstractFruit* createFruit();
};

#endif // ABSTRACTFARM_H
