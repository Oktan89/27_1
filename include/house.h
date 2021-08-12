#pragma once
#include <string>

class Bigbranch;

class House
{
    const std::string _nameElf{"none"};
    const Bigbranch *_myBranch{nullptr};

public:
    House(Bigbranch *myBranch, const std::string &nameElf);
    //Количество соседей
    int numberOFneighbors();
    const char *getNameElf();
};