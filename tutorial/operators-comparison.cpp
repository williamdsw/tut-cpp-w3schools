#include "operators-comparison.h"
#include <iostream>

using namespace std;

void OperatorsComparison::makeOperatorsComparison ()
{
	// FIELDS

	int x = 5;
	int y = 3;

	// OUTPUT

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "0 = false; 1 = true;" << endl;
	cout << "x == y ? " << (x == y) << endl;
	cout << "x != y ? " << (x != y) << endl;
	cout << "x > y ? " << (x > y) << endl;
	cout << "x < y ? " << (x < y) << endl;
	cout << "x >= y ? " << (x >= y) << endl;
	cout << "x <= y ? " << (x <= y) << endl;
}


