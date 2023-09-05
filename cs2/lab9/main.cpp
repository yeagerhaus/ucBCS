#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    Tree<int> tree;
    cout << std::boolalpha;
    cout << "Is empty?: " << tree.isEmpty() << endl;
    tree.insertNode(14);
    tree.insertNode(12);
    tree.insertNode(6);
    tree.insertNode(17);
    tree.insertNode(8);
    cout << "List out via print()" << endl;
    tree.print();
    cout << "Is empty?: " << tree.isEmpty() << endl;
    cout << "List out via inOrderTraveral:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << tree.inOrderTraversal()[i] << endl;
    }
    cout << "Search for 8: " << tree.search(8) << endl;
    cout << "Search for 10: " << tree.search(10) << endl;
}
