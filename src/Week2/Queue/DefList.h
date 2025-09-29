#ifndef DEFLIST_H_INCLUDED
#define DEFLIST_H_INCLUDED
#include <iostream>

using namespace std;

struct List{

    int sizze; //Kich co cua List
    int arr[100]; //Mang

    List(){
        //List ban dau rong
        sizze = 0;
    }
    //O(1)
    void ThemVaoCuoi(int value){
        if(sizze >= 100){
            cout << "List is full!" << endl;
            return;
        } else {
            arr[sizze] = value;
            sizze++;
        }
    }
    //O(n)
    void XoaDau(){
        if(sizze == 0){
            cout << "Can not delete!" << endl;
            return;
        } else {
            for(int i = 0; i < sizze - 1; i++){
                arr[i] = arr[i+1];
            }
            sizze--;
        }
    }
/*
    //O(1)
    void TruyCap(int index){
        if(index < 0 || index > sizze){
            cout << "Invalid index!" << endl;
            return;
        } else {
            cout << arr[index] << endl;
            return;
        }
    }
    //O(n)
    void ThemVaoDau(int value){
        if(sizze >= 100){
            cout << "List is full!" << endl;
            return;
        } else {
            for(int i = sizze; i > 0; --i){
                arr[i] = arr[i-1];
            }
            arr[0] = value;
            sizze++;
        }
    }

    //O(n)
    void ThemVaoViTri(int index, int value){
        if(sizze >= 100){
            cout << "List is full!" << endl;
            return;
        }
        if(index < 0 || index > sizze){
            cout << "Invalid index!" << endl;
            return;
        }
         else if (index == 0){
            ThemVaoDau(value);
        } else if (index == sizze){
            ThemVaoCuoi(value);
        } else {
            for(int i = sizze; i > index; --i){
                arr[i] = arr[i-1];
            }
            arr[index] = value;
            sizze++;
        }
    }
    //O(1)
    void XoaCuoi(){
        if(sizze == 0){
            cout << "Can not delete!" << endl;
            return;
        } else {
            sizze--;
        }
    }
    //O(n)
    void XoaViTri(int index){
        if(sizze == 0){
            cout << "Can not delete!" << endl;
            return;
        }
        if(index < 0 || index >= sizze){
            cout << "Invalid index!" << endl;
            return;
        }
        if(index == 0){
            XoaDau();
        } else if(index == sizze-1){
            XoaCuoi();
        } else {
            for(int i = index; i < sizze; i++){
                arr[i] = arr[i+1];
            }
            sizze--;
        }
    }
    //O(n)
    void DuyetXuoi(){
        if(sizze == 0){
            cout << "Nothing in this list!" << endl;
            return;
        } else {
            for(int i = 0; i < sizze; i++){
                cout << arr[i] << " ";
            }
            cout<<endl;
        }
    }
    //O(n)
    void DuyetNguoc(){
        if(sizze == 0){
            cout << "Nothing in this list!" << endl;
            return;
        } else {
            for(int i = sizze - 1; i >= 0; --i){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
*/
};

#endif // DEFLIST_H_INCLUDED
