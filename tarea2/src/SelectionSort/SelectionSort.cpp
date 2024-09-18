#include "SelectionSort.h"


std::pair<int, double> selectionSort(int arr[], int n) {
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[min_idx], arr[i]);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return {n, duration.count()};
}