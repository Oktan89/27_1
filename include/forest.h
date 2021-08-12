#pragma once

class Tree;

class Forest
{
    //количество деревьев
    int _size{0};
    //Указатель на массив деревьев
    Tree* _tree;
public:
    Forest(int size = 5);
    ~Forest();
    void Print();
};