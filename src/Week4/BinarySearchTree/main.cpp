#include "DefBST.h"

int main() {
    BST t;

    t.insert(25);
    t.insert(40);
    t.insert(5);
    t.insert(15);
    t.insert(20);
    t.insert(30);
    t.insert(10);
    t.insert(35);

    cout << "Preorder: ";
    t.preorder();
    cout << endl;

    cout << "Postorder: ";
    t.postorder();
    cout << endl;

    cout << "Inorder: ";
    t.inorder();
    cout << endl;

    return 0;
}
