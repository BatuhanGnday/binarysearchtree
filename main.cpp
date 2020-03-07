#include <iostream>
#include "binary_search_tree.h"

using namespace std;

int main() {
    binary_search_tree binarySearchTree;

    for (int i = 0; i < 15; ++i) {
        binarySearchTree.insertElement(i);
    }

    binarySearchTree.inOrder(/*what is it for idk*/ 13);
    return 0;
}
