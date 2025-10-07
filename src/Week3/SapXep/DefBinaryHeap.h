#ifndef DEFBINARYHEAP_H_INCLUDED
#define DEFBINARYHEAP_H_INCLUDED

#include <iostream>
using namespace std;

struct BinaryHeap {
    int arr[100];
    int sizze;

    BinaryHeap(){
        sizze = 0;
    }

    bool isEmpty(){
        if(sizze == 0){
            return true;
        } else {
            return false;
        }
    }

    void swim(int k){
        if(isEmpty() || k <= 0){
            return;
        } else {
            while(k > 0){
                if(arr[k] > arr[(k-1)/2]){
                    swap(arr[k], arr[(k-1)/2]);
                    k = (k-1)/2;
                } else {
                    break;
                }
            }
        }
    }

    void sink(int k){
        if(isEmpty()){
            return;
        } else {
            while(k*2+1 < sizze){
                int left = k*2+1;
                int right = k*2+2;
                int choose = left;
                if(right < sizze && arr[right] >= arr[left]){
                    choose = right;
                }
                if(arr[k] < arr[choose]){
                    swap(arr[k], arr[choose]);
                    k = choose;
                } else {
                    break;
                }
            }
        }
    }

    int max(){
        if(isEmpty()){
            return -1;
        } else {
            return arr[0];
        }
    }

    int size(){
        return sizze;
    }

    void insert(int data){
        arr[sizze] = data;
        sizze++;
        swim(sizze-1);
    }

    int delMax(){
        if(isEmpty()){
            return -1;
        } else {
            int MaxData = arr[0];
            swap(arr[0], arr[sizze-1]);
            sizze--;
            sink(0);
            return MaxData;
        }
    }
};

#endif // DEFBINARYHEAP_H_INCLUDED
