#include <cstdlib>
#include <iostream>
#include <ctime>
#include "forest.h"
#include "tree.h"
#include "bigbranch.h"
#include "branch.h"
#include "house.h"

Forest::Forest(int size) : _size(size)
{
    std::srand(std::time(nullptr));
    _tree = new Tree[_size];
    setHouse();
}

Forest::~Forest()
{
    delete[] _tree;
}

void Forest::setHouse()
{
    for(int tree = 0; tree < _size; ++tree)
    {
        for (int bigbrach = 0; bigbrach < _tree[tree].getSizeBigbranch(); ++bigbrach)
        {
            _home.push_back(_tree[tree].getBigbranch()[bigbrach].getHouse());
            for(int branch = 0; branch < _tree[tree].getBigbranch()[bigbrach].getSizeBranch(); ++branch)
            {
                _home.push_back(_tree[tree].getBigbranch()[bigbrach].getBranch()[branch].getHouse());
            }
        }
    }
}

void Forest::printElfName()
{
    for(const auto &s : _home)
        std::cout<<s->getNameElf()<<std::endl;
}