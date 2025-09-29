#include <iostream>
#include "DefStack.h"

using namespace std;

int main()
{
    //TEST

    //Stack_LinkedList
    Stack_LinkedList sll;
    sll.pop();
    sll.top();

    sll.push(1);
    sll.push(2);
    sll.push(3);
    sll.push(4);
    sll.push(5);

    cout << sll.size() << endl;
    cout << sll.pop() << endl;
    cout << sll.top() << endl;

    //Stack_List
    Stack_List sl;
    sl.pop();
    sl.top();

    sl.push(1);
    sl.push(2);
    sl.push(3);
    sl.push(4);
    sl.push(5);

    cout << sl.size() << endl;
    cout << sl.pop() << endl;
    cout << sl.top() << endl;

    return 0;
}
