#pragma once
#include "house.h"

class Branch : public House
{
    House* _house = nullptr;
public:
    Branch();
    ~Branch();
};