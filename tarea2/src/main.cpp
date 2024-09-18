#include <iostream>
#include <unistd.h>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <utility>

#include "BubbleSort/BubbleSort.h"
#include "SelectionSort/SelectionSort.h"
#include "MergeSort/MergeSort.h"

using namespace std;

void printArray(int a[], int size){
    cout << "Array de " << size << " elementos: " << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << ", ";
        if(i % 10 == 9){
            cout << endl;
        }
    }
    cout << endl;
}

void randArray(int a[], int n){
    int num[n];

    for (int i = 0; i < n; i++) {
        num[i] = i;
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(num, num + n, g);

    for (int i = 0; i < n; i++) {
        a[i] = num[i];
    }

    printArray(num, n);

    // sleep(5);
}

int main() {
    cout << "CE2103 - Algoritmos y Estructuras de Datos II \nTarea Extraclase 2 - Analisis de Algoritmos" << endl;

    int n1 = 10;
    int bs1[n1];
    randArray(bs1, n1);

    int n2 = 100;
    int bs2[n2];
    randArray(bs2, n2);

    int n3 = 1000;
    int bs3[n3];
    randArray(bs3, n3);

    auto result = mergeSort(bs2, 0, n2 - 1);
    printArray(bs2, n2);
    cout << "MergeSort: (" << result.first << ", " << result.second << "s)" << endl;

    return 0;
}
