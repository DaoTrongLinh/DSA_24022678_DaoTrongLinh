#include <iostream>
#include "DefQueue.h"

using namespace std;

int main()
{
    //Test

    //Queue_LinkedList
    Queue_LinkedList qll;
    qll.dequeue();
    qll.peek();
    cout << qll.isEmpty() << endl;

    qll.enqueue(1);
    qll.enqueue(2);
    qll.enqueue(3);
    qll.enqueue(4);
    qll.enqueue(5);

    cout << qll.isEmpty() << endl;
    cout << qll.size() << endl;
    cout << qll.dequeue() << endl;
    cout << qll.peek() << endl;
    cout << qll.size() << endl;

    //Queue_List
    Queue_List ql;
    ql.dequeue();
    ql.peek();
    cout << ql.isEmpty() << endl;

    ql.enqueue(1);
    ql.enqueue(2);
    ql.enqueue(3);
    ql.enqueue(4);
    ql.enqueue(5);

    cout << ql.isEmpty() << endl;
    cout << ql.size() << endl;
    cout << ql.dequeue() << endl;
    cout << ql.peek() << endl;
    cout << ql.size() << endl;

    return 0;
}
