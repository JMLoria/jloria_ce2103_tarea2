#include "BubbleSort.h"

void bubbleSort(int arr[], int n) {
    if(n==1)    //Initial Case
        return;
    bool swap_flag = false;
    for(int i=0;i<n-1;i++)    //After this pass the largest element will move to its desired location.
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap_flag = true;
        }
    }

    // IF no two elements were swapped in the loop, then return, as array is sorted
    if(!swap_flag)
        return;
    bubbleSort(arr,n-1);    //Recursion for remaining array
}