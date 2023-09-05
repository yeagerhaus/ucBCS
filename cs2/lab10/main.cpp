#include <iostream>
#include "HashNode.h"
#include "HashMap.h"

using namespace std;


//Driver method to test map class
int main()
{
    HashMap<int, int> *h = new HashMap<int, int>;
    h->insertNode(1,1);
    h->insertNode(2,2);
    h->insertNode(2,3);
    h->display();
    cout << h->sizeofMap() <<endl;
    cout << h->deleteNode(2) << endl;
    cout << h->sizeofMap() <<endl;
    cout << h->isEmpty() << endl;
    cout << h->find(2) << endl;
    cout << h->update(1,3) << endl;
    h->display();
 
    return 0;
}
