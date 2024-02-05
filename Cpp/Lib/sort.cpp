# include "headers/utility.h"
# include <cstdlib>
# include <iostream>

using namespace std;

void mergeSort(int arr[], int li, int ri, int n){
    if(li<ri){
        int mid = li + (ri-li)/2;
        mergeSort(arr, li, mid, n);
        mergeSort(arr, mid+1, ri, n);
        merge(arr, li, ri, mid, n);
    }
}

void lQSort(int arr[], int li, int hi){
    if(li < hi){
        int p = lPartition(arr, li, hi);
        lQSort(arr, li, p-1);
        lQSort(arr, p+1, hi);
    }
}

void hQSort(int arr[], int li, int hi){
    if(li < hi){
        int p = hPartition(arr, li, hi);
        lQSort(arr, li, p);
        lQSort(arr, p+1, hi);
    }
}

void heapSort(int arr[], int n){
    //Build a max heap..
    build_heap(arr, n);

    for(int i = n-1; i>=1; i--){
        swap(arr[0], arr[i]);

        //Heapify the reduced heap..
        max_heapify(arr, i, 0);
    }  
}


