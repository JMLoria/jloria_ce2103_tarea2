#include "SelectionSort.h"

int minIndex(int a[], int i, int j) {
    if (i == j)
        return i;
    int k = minIndex(a, i + 1, j);
    return (a[i] < a[k]) ? i : k;
}

void selectionSort(int a[], int n, int i) {
    if (i == n)
        return;
    int k = minIndex(a, i, n - 1);
    if (k != i)
        std::swap(a[k], a[i]);
    selectionSort(a, n, i + 1);
}
