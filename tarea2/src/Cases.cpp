#include "Cases.h"


using namespace std;

void calculateN(int i, int n[]){
    for (int j = 0; j < i; j++) {
        n[j] = pow(10, j);
    }
}

void worstCase(int i, int n[], double bsTime[], double msTime[], double ssTime[], double llTime[], double btTime[]){
    calculateN(i, n);

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
    calculateN(i, n);

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
    calculateN(i, n);

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