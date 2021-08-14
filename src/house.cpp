#include "house.h"


House::House()
{
    
}

House::~House()
{

}

House* House::getHouse()
{
    return this;
}

const char * House::getNameElf()
{
    return _nameElf.c_str();
}