# include "headers/utility.h"

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



