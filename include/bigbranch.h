#pragma once
#include "house.h"

class Branch;

class Bigbranch : public House
{
    int _colbranch{0};
    Branch* _branch = nullptr;
    House* _house = nullptr;
public:
    Bigbranch();
    ~Bigbranch();
    int getSizeBranch();
    Branch* getBranch();
    
};