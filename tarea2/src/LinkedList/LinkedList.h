#ifndef TAREA2_LINKEDLIST_H
#define TAREA2_LINKEDLIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList {
private:
    Node* head;

public:
    LinkedList();

    void insert(int data);

    void search(int data);

    void print();
};


#endif //TAREA2_LINKEDLIST_H
