#include <iostream>
#include <unistd.h>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <utility>

// Include headers
#include "Array.h"
#include "BubbleSort/BubbleSort.h"
#include "SelectionSort/SelectionSort.h"
#include "MergeSort/MergeSort.h"
#include "LinkedList/LinkedList.h"
#include "BinaryTree/BinaryTree.h"

using namespace std;

void worstCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]){
    for (int j = 0; j < i; j++) {
        n[j] = pow(10, j);
    }

    for (int j = 0; j < i; j++) {
        int bs[n[j]], ss[n[j]], ms[n[j]];
        randArray(bs, n[j]);
        copyArray(bs, ss, n[j]);
        copyArray(bs, ms, n[j]);

        // printArray(bs, n[j]);

        auto start = chrono::high_resolution_clock::now(); // Start stopwatch
        auto end = chrono::high_resolution_clock::now(); // End stopwatch

        // BubbleSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        bubbleSort(bs, n[j]); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        chrono::duration<double> duration = end - start; // Calculate duration
        bsTime[j] = duration.count(); // Save duration

        // SelectionSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        selectionSort(ss, n[j]); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        ssTime[j] = duration.count(); // Save duration

        // MergeSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        mergeSort(ms, 0, n[j] - 1); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        msTime[j] = duration.count(); // Save duration

        // LinkedList
        LinkedList list;
        generateList(list, n[j]);
        // list.print();
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        list.search(n[j] - 1); // Search for last element
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        llTime[j] = duration.count(); // Save duration

        // BinaryTree
        BinaryTree tree;
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        for (int k = 0; k < n[j]; k++) {
            tree.insert(k); // Insert elements
        }
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        btTime[j] = duration.count(); // Save duration
    }
}

void bestCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]){
    for (int j = 0; j < i; j++) {
        n[j] = pow(10, j);
    }

    for (int j = 0; j < i; j++) {
        int bs[n[j]], ss[n[j]], ms[n[j]];
        generateArray(bs, n[j]);
        copyArray(bs, ss, n[j]);
        copyArray(bs, ms, n[j]);

        // printArray(bs, n[j]);

        auto start = chrono::high_resolution_clock::now(); // Start stopwatch
        auto end = chrono::high_resolution_clock::now(); // End stopwatch

        // BubbleSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        bubbleSort(bs, n[j]); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        chrono::duration<double> duration = end - start; // Calculate duration
        bsTime[j] = duration.count(); // Save duration

        // SelectionSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        selectionSort(ss, n[j]); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        ssTime[j] = duration.count(); // Save duration

        // MergeSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        mergeSort(ms, 0, n[j] - 1); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        msTime[j] = duration.count(); // Save duration

        // LinkedList
        LinkedList list;
        generateList(list, n[j]); // Generate list
        // list.print();
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        list.search(0); // Search for last element
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        llTime[j] = duration.count(); // Save duration

        // BinaryTree
        BinaryTree tree;
        int rootData = n[j] / 2;
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        for (int k = 0; k < rootData; k++) {
            tree.insert(rootData + k); // Insert elements
            tree.insert(rootData - k);
        }
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        btTime[j] = duration.count(); // Save duration
    }
}

void averageCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]){
    for (int j = 0; j < i; j++) {
        n[j] = pow(10, j);
    }

    for (int j = 0; j < i; j++) {
        int bs[n[j]], ss[n[j]], ms[n[j]];
        randArray(bs, n[j]);
        copyArray(bs, ss, n[j]);
        copyArray(bs, ms, n[j]);

        // printArray(bs, n[j]);

        auto start = chrono::high_resolution_clock::now(); // Start stopwatch
        auto end = chrono::high_resolution_clock::now(); // End stopwatch

        // BubbleSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        bubbleSort(bs, n[j]); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        chrono::duration<double> duration = end - start; // Calculate duration
        bsTime[j] = duration.count(); // Save duration

        // SelectionSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        selectionSort(ss, n[j]); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        ssTime[j] = duration.count(); // Save duration

        // MergeSort
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        mergeSort(ms, 0, n[j] - 1); // Sort array
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        msTime[j] = duration.count(); // Save duration

        // LinkedList
        LinkedList list;
        generateList(list, n[j]);
        // list.print();
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        list.search(n[j/2] - 1); // Search for last element
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        llTime[j] = duration.count(); // Save duration

        // BinaryTree
        BinaryTree tree;
        int rootData = n[j] / 2;
        start = chrono::high_resolution_clock::now(); // Start stopwatch
        for (int k = 0; k < rootData; k++) {
            tree.insert(rootData + k); // Insert elements
            tree.insert(rootData - k);
        }
        end = chrono::high_resolution_clock::now(); // End stopwatch
        duration = end - start; // Calculate duration
        btTime[j] = duration.count(); // Save duration
    }
}

void printCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]){
    cout << "BubbleSort time" << endl;
    for (int j = 0; j < i; j++) {
        cout << "\t(" << n[j] << ", " << bsTime[j] << ")" << endl;
    }

    cout << "MergeSort time" << endl;
    for (int j = 0; j < i; j++) {
        cout << "\t(" << n[j] << ", " << msTime[j] << ")" << endl;
    }

    cout << "SelectionSort time" << endl;
    for (int j = 0; j < i; j++) {
        cout << "\t(" << n[j] << ", " << ssTime[j] << ")" << endl;
    }

    cout << "LinkedList - search time" << endl;
    for (int j = 0; j < i; j++) {
        cout << "\t(" << n[j] << ", " << llTime[j] << ")" << endl;
    }

    cout << "BinaryTree - insert time" << endl;
    for (int j = 0; j < i; j++) {
        cout << "\t(" << n[j] << ", " << btTime[j] << ")" << endl;
    }

    cout << endl;
}

int main() {
    cout << "CE2103 - Algoritmos y Estructuras de Datos II \nTarea Extraclase 2 - Analisis de Algoritmos" << endl;

    int i = 5;
    int n[i];
    double bsTime[i];
    double msTime[i];
    double ssTime[i];
    double llTime[i];
    double btTime[i];

    cout << "Peor Caso" << endl;
    worstCase(i, n, bsTime, msTime, ssTime, llTime, btTime);
    printCase(i, n, bsTime, msTime, ssTime, llTime, btTime);

    sleep(5);

    cout << "Mejor Caso" << endl;
    bestCase(i, n, bsTime, msTime, ssTime, llTime, btTime);
    printCase(i, n, bsTime, msTime, ssTime, llTime, btTime);

    sleep(5);

    cout << "Caso Promedio" << endl;
    averageCase(i, n, bsTime, msTime, ssTime, llTime, btTime);
    printCase(i, n, bsTime, msTime, ssTime, llTime, btTime);

    return 0;
}
