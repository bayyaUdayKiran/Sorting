#ifndef UTILITY_H
#define UTILITY_H

void populate_arrayrray(int arr[], int n);
void print_array(int arr[], int n);
int max_element(int arr[], int n);
int min_element(int arr[], int n);
int cp_array(int src[], int dest[], int sn, int dn);
int** split_array(int arr[], int mid, int n);
bool is_sorted(int arr[], bool rev, int n);
int* merge(int l[], int r[], int ln, int rn);
void merge(int arr[], int li, int ri, int mid, int n);
int max_digit(int arr[], int n);
void partition(int arr[], int li, int hi, int pi);
int lPartition(int arr[], int li, int hi);
int hPartition(int arr[], int li, int hi);
void build_heap(int arr[], int li, int hi);
void max_heapify(int arr[], int n, int i);
void min_heapify(int arr[], int n, int i);
void build_heap(int arr[], int n);


#endif