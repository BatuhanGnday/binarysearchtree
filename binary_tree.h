//
// Created by Batuhan Günday on 7.03.2020.
//

#ifndef BINARYSEARCHTREE_BINARY_TREE_H
#define BINARYSEARCHTREE_BINARY_TREE_H

#include <iostream>
using namespace std;

class binary_tree {
private:
    double * tree;
public:
    int size;
    void insertElement(double x);
    void searchElement(double x);
    void inOrder(double currentIndex);
    void preOrder(double currentIndex);
    void postOrder(double currentIndex);
    void parent(double x);
    double extendSize(double x);


};


#endif //BINARYSEARCHTREE_BINARY_TREE_H
