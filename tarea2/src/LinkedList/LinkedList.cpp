#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insert(int data) {
    Node* newNode = new Node(data);
    Node* temp = head;

    if (head == nullptr) {
        head = newNode;
    } else {
        while (temp->next != nullptr) {
            if (temp->data == data) {
                return;
            }
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void LinkedList::search(int data) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == data) {
            cout << "Element " << data << " found!" << endl;
            return;
        }
        temp = temp->next;
    }
}

void LinkedList::print() {
    Node* temp = head;
    int i = 0;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        if (i % 10 == 9) {
            cout << endl;
        }
        temp = temp->next;
        i++;
    }
    cout << endl;
}