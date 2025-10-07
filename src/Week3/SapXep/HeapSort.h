#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED

#include <iostream>
#include "DefBinaryHeap.h"
using namespace std;

void heapSort(int a[], int n){
    BinaryHeap bh;

    for(int i = 0; i < n; i++){
        bh.insert(a[i]);
    }

    for(int i = n - 1; i >= 0; i--){
        a[i] = bh.delMax();
    }
}

#endif // HEAPSORT_H_INCLUDED
