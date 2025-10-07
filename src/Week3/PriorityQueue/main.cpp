#include <iostream>
#include "DefPriorityQueue.h"

using namespace std;

int main()
{
    PriorityQueue pq;

    cout << pq.isEmpty() << endl;
    cout << pq.size() << endl;

    pq.insert(3);
    pq.insert(6);
    pq.insert(20);
    pq.insert(45);
    pq.insert(36);

    cout << pq.isEmpty() << endl;
    cout << pq.size() << endl;

    cout << pq.max() << endl;

    cout << pq.delMax() << endl;
    cout << pq.delMax() << endl;

    cout << pq.size() << endl;
    cout << pq.isEmpty() << endl;

    return 0;
}
