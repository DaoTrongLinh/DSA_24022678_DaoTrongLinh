#include <iostream>
#include "DefBinaryHeap.h"

using namespace std;

int main()
{
    BinaryHeap bh;

    cout << bh.isEmpty() << endl;
    cout << bh.size() << endl;

    bh.insert(3);
    bh.insert(20);
    bh.insert(36);
    bh.insert(45);
    bh.insert(6);

    cout << bh.isEmpty() << endl;
    cout << bh.size() << endl;

    cout << bh.max() << endl;

    cout << bh.delMax() << endl;
    cout << bh.delMax() << endl;

    cout << bh.size() << endl;
    cout << bh.isEmpty() << endl;

    return 0;
}
