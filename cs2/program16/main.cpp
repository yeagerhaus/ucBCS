// main.cpp
#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{   
    int x = 0;
    cout << "What is the degree of the polynomial? ";
    cin >> x;
    Polynomial p1(x);
    cin >> p1;
    cout << p1;
    return 0;
}
