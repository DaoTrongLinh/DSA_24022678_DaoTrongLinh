#ifndef DEFSTACK_H_INCLUDED
#define DEFSTACK_H_INCLUDED
#include <iostream>
#include "DefLinkedList.h"
#include "DefList.h"

using namespace std;

struct Stack_LinkedList{

    LinkedList LL;

    bool isEmpty(){
        if(LL.head == nullptr){
            return true;
        } else {
            return false;
        }
    }

    void push(int item){
        LL.ThemVaoDau(item);
    }

    int pop(){
        if(isEmpty()){
            cout << "Can not pop!" << endl;
            return -1;
        } else {
            int value = LL.head -> data;
            LL.XoaDau();
            return value;
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

    int top(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return LL.head -> data;
        }
    }
};

struct Stack_List{

    List lst;

    bool isEmpty(){
        if(lst.sizze == 0){
            return true;
        } else {
            return false;
        }
    }

    void push(int item){
        lst.ThemVaoCuoi(item);
    }

    int pop(){
        if(isEmpty()){
            cout << "Can not pop!" << endl;
            return -1;
        } else {
            int value = lst.arr[lst.sizze-1];
            lst.XoaCuoi();
            return value;
        }
    }

    int size(){
        if(isEmpty()){
            return 0;
        } else {
            return lst.sizze;
        }
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return lst.arr[lst.sizze-1];
        }
    }
};

#endif // DEFSTACK_H_INCLUDED
