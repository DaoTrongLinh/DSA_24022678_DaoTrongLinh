#include <iostream>

using namespace std;

int BinarySearch(int a[], int n, int x){
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x){
            return mid;
        } else if (a[mid] > x){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "Nhap gia tri tung phan tu: " << endl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    //Sap xep chen
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
            }
        }
    }

    cout << "Nhap so can kiem tra trong mang vua nhap: ";
    cin >> x;

    int pos = BinarySearch(a, n, x);
    if(pos != -1){
        cout << "So cua ban co xuat hien trong mang!";
    } else {
        cout << "So cua ban khong xuat hien trong mang!";
    }
    return 0;
}
