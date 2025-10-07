#include <iostream>
#include "QuickSort.h"
#include "MergeSort.h"
#include "HeapSort.h"

using namespace std;

int main()
{
    //Nhap phan tu cho mang
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    //QuickSort
    pivot(a,n);
    quickSort(a,n);

    cout << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < m; i++){
        cout << b[i] << " ";
    }

    //MergeSort
    mergeSort(b, 0, m-1);

    cout << endl;
    for(int i = 0; i < m; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    int o;
    cin >> o;
    int c[o];
    for(int i = 0; i < o; i++){
        cin >> c[i];
    }
    for(int i = 0; i < o; i++){
        cout << c[i] << " ";
    }

    //HeapSort
    heapSort(c, o);

    cout << endl;
    for(int i = 0; i < o; i++){
        cout << c[i] << " ";
    }

    return 0;
}
