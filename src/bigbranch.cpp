#include <cstdlib>
#include "bigbranch.h"
#include "branch.h"
#include "house.h"


Bigbranch::Bigbranch()
{
    _colbranch = 2 + rand()%2;
    _branch = new Branch[_colbranch];
    _house = new House();
}

Bigbranch::~Bigbranch()
{
    delete _house;
    delete[] _branch;
}

int Bigbranch::getSizeBranch()
{
    return _colbranch;
}

 Branch* Bigbranch::getBranch()
 {
     return _branch;
 }