#include <iostream>
#include "binary_search_tree.h"

using namespace std;

int main() {
    binary_search_tree binarySearchTree;

    cout << "Adding the elements to the array.";
    binarySearchTree.insertElement(5.3);
    binarySearchTree.insertElement(7.2);
    binarySearchTree.insertElement(8.0);
    binarySearchTree.insertElement(7.6);
    binarySearchTree.insertElement(6.2);
    binarySearchTree.insertElement(3.4);
    binarySearchTree.insertElement(2.3);
    binarySearchTree.insertElement(4.5);
    binarySearchTree.insertElement(1.2);
    binarySearchTree.insertElement(2.8);
    binarySearchTree.insertElement(3.5);
    binarySearchTree.insertElement(9.2);
    cout << "Elements are added.";

    cout <<"Tree in inorder: "<< endl;
    binarySearchTree.inOrder(/*what is it for idk*/ 0);
    cout << "Tree in postorder: "<< endl;
    binarySearchTree.postOrder(0);
    cout << "Tree in preorder: " << endl;
    binarySearchTree.preOrder(0);
    cout << "What do you looking for?"<< endl;
    double wantedelement;
    cin >> wantedelement;
    binarySearchTree.searchElement(wantedelement);
    return 0;
}
