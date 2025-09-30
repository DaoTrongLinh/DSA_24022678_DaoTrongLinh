#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> N;
    int a[N];

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    cout << "Truoc khi sap xep:" << endl;
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    //Sap xep lua chon
    for(int i = 0; i < N-1; i++){
        int min = i;
        for(int j = i+1; j < N; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
    cout << "Sau khi sap xep lua chon:" << endl;
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    return 0;
}
