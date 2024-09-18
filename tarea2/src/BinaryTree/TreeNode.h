#ifndef TAREA2_TREENODE_H
#define TAREA2_TREENODE_H


class TreeNode {
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data);
    ~TreeNode() = default;
};


#endif //TAREA2_TREENODE_H
