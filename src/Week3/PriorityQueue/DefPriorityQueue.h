#ifndef DEFPRIORITYQUEUE_H_INCLUDED
#define DEFPRIORITYQUEUE_H_INCLUDED

#include <iostream>
#include "DefBinaryHeap.h"
using namespace std;

struct PriorityQueue{
    BinaryHeap bh;

    bool isEmpty(){
        bh.isEmpty();
    }
    void insert(int value){
        bh.insert(value);
    }
    int max(){
        return bh.max();
    }
    int size(){
        return bh.sizze;
    }
    int delMax(){
        return bh.delMax();
    }
};

#endif // DEFPRIORITYQUEUE_H_INCLUDED
