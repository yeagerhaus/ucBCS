#include <iostream>
#include "Polynomial.h"
using namespace std;

Polynomial::Polynomial(int degrees)
{
    degrees_ = degrees;
    ca_ = new double[degrees + 1];
    for (int x = 0; x <= degrees_; x++) {
        ca_[x] = 0;
    }
}

Polynomial::~Polynomial() {
    delete[] ca_;
}

istream& operator>>(istream &is, Polynomial &p)
{
    for (int x = p.degrees_; x >= 0; x--) {
        cout << "Enter the coefficient for degree " << x << ": ";
        cin >> p.ca_[x];
    }
    return is;
}

ostream& operator<<(ostream &os, const Polynomial &p)
{
    cout << p.ca_[p.degrees_] << "x^" << p.degrees_;
    for (int x = p.degrees_ - 1; x > 1; x--) {
        if (p.ca_[x] < 0) {
            cout << " - " << p.ca_[x] * -1 << "x^" << x;
        } else if (p.ca_[x] > 0) {
            cout << " + " << p.ca_[x] << "x^" << x;
        }
    }
    if (p.ca_[1] < 0) {
        cout << " - " << p.ca_[1] * -1 << "x";
    } else if (p.ca_[1] > 0) {
        cout << " + " << p.ca_[1] << "x";
    }
    if (p.ca_[0] < 0) {
        cout << " - " << p.ca_[0] * -1;
    } else if (p.ca_[0] > 0) {
        cout << " + " << p.ca_[0];
    }
    return os;
}
