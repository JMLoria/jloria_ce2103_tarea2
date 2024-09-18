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

void randArray(int a[], int n){
    int num[n];

    for (int i = 0; i < n; i++) {
        num[i] = i;
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(num, num + n, g);

    copyArray(num, a, n);
}

void timeFun(int i, int n[], double bsTime[], double msTime[], double ssTime[]){

    for (int j = 0; j < i; j++) {
        n[j] = pow(10, j);
    }

    for (int j = 0; j < i; j++) {
        int bs[n[j]], ss[n[j]], ms[n[j]];
        randArray(bs, n[j]);
        copyArray(bs, ss, n[j]);
        copyArray(bs, ms, n[j]);

        // BubbleSort
        auto start = chrono::high_resolution_clock::now();
        bubbleSort(bs, n[j]);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        bsTime[j] = duration.count();

        // SelectionSort
        start = chrono::high_resolution_clock::now();
        selectionSort(ss, n[j]);
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        ssTime[j] = duration.count();

        // MergeSort
        start = chrono::high_resolution_clock::now();
        mergeSort(ms, 0, n[j] - 1);
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        msTime[j] = duration.count();
    }
}

int main() {
    cout << "CE2103 - Algoritmos y Estructuras de Datos II \nTarea Extraclase 2 - Analisis de Algoritmos" << endl;

    int k = 5;
    int n[k];
    double bsTime[k];
    double msTime[k];
    double ssTime[k];
    timeFun(k, n, bsTime, msTime, ssTime);

    cout << "n, BubbleSort, SelectionSort, MergeSort" << endl;
    for (int j = 0; j < k; j++) {
        cout << n[j] << ", " << bsTime[j] << ", " << ssTime[j] << ", " << msTime[j] << endl;
    }

    return 0;
}
