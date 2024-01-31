#ifndef UTILITY_H
#define UTILITY_H

void populateArray(int arr[], int n);
void printArray(int arr[], int n);
void swap(int arr[], int n, int i, int j);
int max(int arr[], int n);
int min(int arr[], int n);
int cpArray(int src[], int dest[], int sn, int dn);
int** splitArray(int arr[], int mid, int n);
bool isSorted(int arr[], bool rev, int n);
int* merge(int l[], int r[], int ln, int rn);
void merge(int arr[], int li, int ri, int mid, int n);
int maxDigit(int arr[], int n);
void partition(int arr[], int li, int hi, int pi);
int lPartition(int arr[], int li, int hi);
int hPartition(int arr[], int li, int hi);


#endif