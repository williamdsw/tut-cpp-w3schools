#include "operators-logical.h"
#include <iostream>

using namespace std;

void OperatorsLogical::makeOperatorsLogical ()
{
	// FIELDS

	int x = 5;
	int y = 3;
	int z = 7;

	// OUTPUT

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "0 = false; 1 = true;" << endl;
	cout << "x < y && x < z ? " << (x < y && x < z) << endl;
	cout << "x == y || x <= z ? " << (x == y || x <= z) << endl;
	cout << "!(x < y && x < z) ? " << !(x < y && x < z) << endl;
}
