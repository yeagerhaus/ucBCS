//header file

#ifndef RATIONAL_H_
#define RATIONAL_H_


//Rational class definition

class Rational {
public:
	Rational();
	Rational ( int n = 0, int d = 1); //default case
	void adding( const Rational &);  // a) adding two rational numbers
	void subtracting(const Rational &); // b) subtracting two rational numbers
	void multiplying(const Rational &);  // c) multiplying two rational numbers
	void dividing(const Rational &);    // d) dividing two rational numbers
	void printRational();   // e) printing in form of a/b, where a is numerator and b is denominator
	void printFloat();    // f) printing in floating point format

private:
	int numerator;
	int denominator;
	void reduce();
};

#endif
