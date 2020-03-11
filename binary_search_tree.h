//
// Created by Batuhan Günday on 7.03.2020.
//

#ifndef BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
#define BINARYSEARCHTREE_BINARY_SEARCH_TREE_H

#include <iostream>
using namespace std;

class binary_search_tree {
private:
    double * tree;
public:

    binary_search_tree();

    int size = 15;
    void insertElement(double x);
    void searchElement(double x);
    void inOrder(int currentIndex);
    void preOrder(int currentIndex);
    void postOrder(int currentIndex);
    void root(double x);
    double extendSize(double x);


};


#endif //BINARYSEARCHTREE_BINARY_SEARCH_TREE_H
