#include "MergeSort.h"

void merge(int array[], int left, int mid, int right)
{
    int i, j, k;

    // Size of left sublist
    int size_left = mid - left + 1;

// Size of right sublist
    int size_right =  right - mid;

/* create temp arrays */
    int Left[size_left], Right[size_right];

/* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < size_left; i++)
    {
        Left[i] = array[left+i];
    }

    for(j = 0; j < size_right; j++)
    {
        Right[j] = array[mid+1+j];
    }

// Merge the temp arrays back into arr[left..right]
    i = 0; // Initial index of left subarray
    j = 0; // Initial index of right subarray
    k = left; // Initial index of merged subarray

    while (i < size_left && j < size_right)
    {
        if (Left[i] <= Right[j])
        {
            array[k] = Left[i];
            i++;
        }
        else
        {
            array[k] = Right[j];
            j++;
        }
        k++;
    }

// Copy the remaining elements of Left[]
    while (i < size_left)
    {
        array[k] = Left[i];
        i++;
        k++;
    }

// Copy the rest elements of R[]
    while (j < size_right)
    {
        array[k] = Right[j];
        j++;
        k++;
    }
}

#include <chrono>
#include <utility>

std::pair<int, double> mergeSort(int array[], int left, int right) {
    auto start = std::chrono::high_resolution_clock::now();

    if(left < right) {
        int mid = (left + right) / 2;

        // Sort first and second halves
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Finally merge them
        merge(array, left, mid, right);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return {right - left + 1, duration.count()};
}