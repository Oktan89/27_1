#pragma once
#include <string>


class House
{
    const std::string _nameElf = "none";
    
public:
    House();
    ~House();
    //Количество соседей
    int numberOFneighbors();
    const char *getNameElf();
    House* getHouse();
};