#include "operators-arithmetic.h"
#include <iostream>

using namespace std;

void OperatorsArithmetic::makeOperatorsArithmetic ()
{
	// FIELDS

	int x = 10;
	int y = 2;
	int addition = x + y;
	int substraction = x - y;
	int multiplication = x * y;
	int division = x / y;
	int modulus = x % y;
	x++;
	int increment = x;
	x = 10;
	--x;
	int decrement = x;

	// OUTPUT

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x + y = " << addition << endl;
	cout << "x - y = " << substraction << endl;
	cout << "x * y = " << multiplication << endl;
	cout << "x / y = " << division << endl;
	cout << "x % y = " << modulus << endl;
	cout << "x++ = " << increment << endl;
	cout << "--x = " << decrement << endl;
}
