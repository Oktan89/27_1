#pragma once
#include <vector>

class Forest
{
    //количество деревьев
    int _size{0};
    //Указатель на массив деревьев
    class Tree* _tree = nullptr;
    //указатели на все созданные дома
    std::vector<class House*> _home;
    void setHouse();
    int numberOFneighbors(struct Address& address);
public:
    Forest(int size = 5);
    ~Forest();
    void setNameElf();
    void printElfName();
    void findElf(const std::string& name);
};