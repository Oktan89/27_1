#include "tree.h"
#include "bigbranch.h"

Tree::Tree()
{
    _colBegbranch = 3 + rand() % 3;

    _bigbranch = new Bigbranch[_colBegbranch];

}

Tree::~Tree()
{
    delete[] _bigbranch;
}

int Tree::getSizebranch()
{
    return _colBegbranch;
}