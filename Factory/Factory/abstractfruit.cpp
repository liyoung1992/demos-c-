#include "abstractfruit.h"
#include <iostream>
#include <stdio.h>

using namespace std;
AbstractFruit::AbstractFruit()
{

}

AbstractFruit::~AbstractFruit()
{

}

Apple::Apple()
{

}

Apple::~Apple()
{

}

void Apple::operation()
{
    cout << "this is Apple ,created by AppleFarm" << endl;
}

Banana::Banana()
{

}

Banana::~Banana()
{

}

void Banana::operation()
{
    cout<< "this is banana,created by BananaFarm!" <<endl;
}
