#pragma once
#include <vector>

class Tree;

class House;

class Forest
{
    //количество деревьев
    int _size{0};
    //Указатель на массив деревьев
    Tree* _tree = nullptr;
    std::vector<House*> _home;
    void setHouse();
public:
    Forest(int size = 5);
    ~Forest();
    
    void printElfName();
};