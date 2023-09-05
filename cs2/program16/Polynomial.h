#ifndef _POLYNOMIAL_H
#define _POLYNOMIAL_H

#include <iostream>

class Polynomial {

// declare input and output operators functions as friends
// to the class so they can directly access the private data
friend std::istream& operator>>(std::istream& is, Polynomial &p);
friend std::ostream& operator<<(std::ostream& os, const Polynomial &p);
  
public:
  // constructor
  Polynomial(int degrees);
  
  //destructor
  ~Polynomial();
  
private:
    int degrees_;
    double *ca_;
};

#endif
