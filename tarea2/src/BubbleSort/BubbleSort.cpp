#include "BubbleSort.h"

std::pair<int, double> bubbleSort(int arr[], int n) {
    auto start = std::chrono::high_resolution_clock::now();

    if(n == 1)    // Initial Case
        return {n, 0.0};
    bool swap_flag = false;
    for(int i = 0; i < n - 1; i++) {    // After this pass the largest element will move to its desired location.
        if(arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swap_flag = true;
        }
    }

    // IF no two elements were swapped in the loop, then return, as array is sorted
    if(!swap_flag)
        return {n, 0.0};
    bubbleSort(arr, n - 1);    // Recursion for remaining array

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return {n, duration.count()};
}