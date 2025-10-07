#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

#include <iostream>
using namespace std;

void merge(int a[], int left, int mid, int right){
    int nl = mid - left + 1;
    int nr = right - mid;
    int l[nl], r[nr];

    for(int i = 0; i < nl; i++){
        l[i] = a[left+i];
    }
    for(int j = 0; j < nr; j++){
        r[j] = a[mid+1+j];
    }

    int i = 0;
    int j = 0;
    int k = left;
    while(i < nl && j < nr){
        if(l[i] <= r[j]){
            a[k] = l[i];
            i++;
        } else {
            a[k] = r[j];
            j++;
        }
        k++;
    }

    while(i < nl){
        a[k] = l[i];
        i++;
        k++;
    }
    while(j < nr){
        a[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int left, int right){
    if(left < right){
        int mid = (left+right)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

#endif // MERGESORT_H_INCLUDED
