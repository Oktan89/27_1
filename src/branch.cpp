#include "branch.h"
#include "house.h"

Branch::Branch()
{

    _house = new House();
}

Branch::~Branch()
{

    delete _house;
}

