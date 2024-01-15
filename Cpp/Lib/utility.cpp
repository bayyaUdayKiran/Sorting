# include <iostream>
# include "utility.h"

using namespace std;


void populateArray(int arr[], int n){
    cout << n;
    for(int i = 0; i<n; i++){
        cout << "array[" << i << "]: ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n){
    cout << '[';
    for(int i = 0; i<n; i++){
        if(i!=n-1)
            cout << arr[i] << ", ";
        else
            cout << arr[i];
    }
    cout << ']' << endl;
}

void swap(int arr[], int n, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int max(int arr[], int n){
    int mx = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>mx)
            mx = arr[i];
    }

    return mx;
}

int min(int arr[], int n){
    int mn = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]<mn)
            mn = arr[i];
    }

    return mn;
}

int cpArray(int src[], int dest[], int sn, int dn){
    if(sn!=dn)
        return -1;
    for(int i = 0; i<sn; i++){
        *(dest+i) = *(src+i);
    }

    return 0;
}

