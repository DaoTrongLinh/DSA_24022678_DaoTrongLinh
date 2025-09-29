#ifndef DEFQUEUE_H_INCLUDED
#define DEFQUEUE_H_INCLUDED
#include <iostream>
#include "DefLinkedList.h"
#include "DefList.h"

using namespace std;

struct Queue_LinkedList{

    LinkedList LL;

    bool isEmpty(){
        if(LL.head == nullptr){
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int item){
        LL.ThemVaoCuoi(item);
    }

    int dequeue(){
        if(isEmpty()){
            cout << "Can not dequeue!" << endl;
            return -1;
        } else {
            int value = LL.head -> data;
            LL.XoaDau();
            return value;
        }
    }

    int peek(){
        if(isEmpty()){
            cout << "Empty Queue!" << endl;
            return -1;
        } else {
            return LL.head -> data;
        }
    }

    int size(){
        int count = 0;
        if(isEmpty()){
            return count;
        } else {
            Node *h = LL.head;
            while(h != nullptr){
                count++;
                h = h -> next;
            }
            return count;
        }
    }
};

struct Queue_List{

    List lst;

    bool isEmpty(){
        if(lst.sizze == 0){
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int item){
        lst.ThemVaoCuoi(item);
    }

    int dequeue(){
        if(isEmpty()){
            cout << "Can not dequeue!" << endl;
            return -1;
        } else {
            int value = lst.arr[0];
            lst.XoaDau();
            return value;
        }
    }

    int peek(){
        if(isEmpty()){
            cout << "Empty Queue!" << endl;
            return -1;
        } else {
            return lst.arr[0];
        }
    }

    int size(){
        if(isEmpty()){
            return 0;
        } else {
            return lst.sizze;
        }
     }
};

#endif // DEFQUEUE_H_INCLUDED
