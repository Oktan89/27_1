#include <cstdlib>
#include <ctime>
#include "forest.h"
#include "tree.h"

Forest::Forest(int size) : _size(size)
{
    std::srand(std::time(nullptr));
    _tree = new Tree[_size];
}

Forest::~Forest()
{
    delete[] _tree;
}

void Forest::Print()
{
    for (int i = 0; i < _size; ++i)
        std::cout << _tree[i].getSizebranch() << std::endl;
}