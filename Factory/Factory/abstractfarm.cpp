#include "abstractfarm.h"

AbstractFarm::AbstractFarm()
{

}

AbstractFarm::~AbstractFarm()
{

}

AppleFarm::AppleFarm()
{

}

AppleFarm::~AppleFarm()
{

}

AbstractFruit *AppleFarm::createFruit()
{
    AbstractFruit* apple = new Apple();
    return apple;
}

BananaFarm::BananaFarm()
{

}

BananaFarm::~BananaFarm()
{

}

AbstractFruit *BananaFarm::createFruit()
{
    AbstractFruit* banana = new Banana();
    return banana;
}
