#ifndef TAREA2_NODE_H
#define TAREA2_NODE_H


class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data);
    ~Node() = default;
};


#endif //TAREA2_NODE_H
