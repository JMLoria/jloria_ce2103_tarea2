#include "Array.h"

void printArray(int a[], int size){
    cout << "Array of " << size <<": " << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << ", ";
        if(i % 10 == 9){
            cout << endl;
        }
    }
    cout << endl;
}

void copyArray(int a[], int b[], int n){
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
}

void generateArray(int a[], int n){
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
}

void randArray(int a[], int n){
    int num[n];

    generateArray(num, n);

    random_device rd;
    mt19937 g(rd());
    shuffle(num, num + n, g);

    copyArray(num, a, n);
}

void generateList(LinkedList &list, int n){
    for (int i = 0; i < n; i++) {
        list.insert(i);
    }
}