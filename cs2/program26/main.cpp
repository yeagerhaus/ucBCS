#include <iostream>
#include "disjointset.h"

using namespace std;

// Driver code
int main()
{
    ListSet a;
    a.makeset(13);  //a new set is made with one object only
    a.makeset(25);
    a.makeset(45);
    a.makeset(65);
 
    cout << "find(13): " << a.find(13) << endl;
    cout << "find(25): "
         << a.find(25) << endl;
    cout << "find(65): "
         << a.find(65) << endl;
    cout << "find(45): "
         << a.find(45) << endl << endl;
    cout << "Union(find(65), find(45)) \n";
 
    a.Union(a.find(65), a.find(45));
 
    cout << "find(65]): "
         << a.find(65) << endl;
    cout << "find(45]): "
         << a.find(45) << endl;
    return 0;
}
