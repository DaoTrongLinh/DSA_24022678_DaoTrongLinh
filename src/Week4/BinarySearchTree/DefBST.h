#ifndef DEFBST_H_INCLUDED
#define DEFBST_H_INCLUDED

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

struct BST{
    Node *root;

    BST(){
        root = nullptr;
    }

    void insertt(Node *&r, int value){
        if(r == nullptr){
            r = new Node{value, nullptr, nullptr};
            return;
        }
        if(value < r->data){
            insertt(r->left, value);
        } else if (value > r->data){
            insertt(r->right, value);
        } else {
            return;
        }
    }

    void insert(int value){
        insertt(root, value);
    }

    void preorderr(Node *r){
        if(r == nullptr){
            return;
        }
        cout << r->data << " ";
        preorderr(r->left);
        preorderr(r->right);
    }
    void preorder(){
        if(root == nullptr){
            return;
        } else {
            preorderr(root);
        }
    }

    void postorderr(Node *r){
        if(r == nullptr){
            return;
        }
        postorderr(r->left);
        postorderr(r->right);
        cout << r->data << " ";
    }
    void postorder(){
        if(root == nullptr){
            return;
        } else {
            postorderr(root);
        }
    }

    void inorderr(Node *r){
        if(r == nullptr){
            return;
        }
        inorderr(r->left);
        cout << r->data << " ";
        inorderr(r->right);
    }
    void inorder(){
        if(root == nullptr){
            return;
        } else {
            inorderr(root);
        }
    }
};

#endif // DEFBST_H_INCLUDED
