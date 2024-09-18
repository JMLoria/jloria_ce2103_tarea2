#ifndef TAREA2_BINARYTREE_H
#define TAREA2_BINARYTREE_H

#include <iostream>
#include "TreeNode.h"

using namespace std;

class BinaryTree {
private:
    TreeNode *root;

    void inOrderTraversal(TreeNode *node);

public:
    BinaryTree();

    void insert(int data);

    void print();
};


#endif //TAREA2_BINARYTREE_H
