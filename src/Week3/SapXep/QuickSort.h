#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

#include <iostream>
using namespace std;

int pivot(int a[], int n){
    int pivot = a[n-1];
    int i = -1;
    for (int j = 0; j < n-1; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[n-1]);
    return i + 1;
}

void quickSort(int a[], int n){
    if(n <= 1){
        return;
    } else {
        int p = pivot(a,n);
        quickSort(a, p);
        quickSort(a + p + 1, n - p - 1);
    }
}

#endif // QUICKSORT_H_INCLUDED
