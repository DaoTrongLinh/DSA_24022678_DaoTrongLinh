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

    //Sap xep noi bot
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N-1-i; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
    cout << "Sau khi sap xep noi bot:" << endl;
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    return 0;
}
