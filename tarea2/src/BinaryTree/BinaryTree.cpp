#include "BinaryTree.h"

BinaryTree::BinaryTree() {
    root = nullptr;
}

void BinaryTree::insert(int data) {
    TreeNode *newNode = new TreeNode(data);
    TreeNode *current = root;

    if(root == nullptr){
        root = newNode;
    } else {
        while (true) {
            if (data == current->data) {
                // cout << "Element already exists" << endl;
                break;
            } else

            if (data < current->data) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    break;
                } else {
                    current = current->left;
                }
            } else {
                if (current->right == nullptr) {
                    current->right = newNode;
                    break;
                } else {
                    current = current->right;
                }
            }
        }
    }
}

void BinaryTree::inOrderTraversal(TreeNode *node) {
    if(node != nullptr){
        inOrderTraversal(node->left);
        cout << node->data << ", ";
        inOrderTraversal(node->right);
    }
}

void BinaryTree::print() {
    inOrderTraversal(root);
    cout << endl;
}