#include "if-else.h"
#include <iostream>

using namespace std;

void IfElse::makeIfElse ()
{
	// FIELDS

	int x = 20;
	int y = 18;
	int z = 15;

	// OUTPUT

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}

	if (x == y)
	{
		cout << "x and y are equal" << endl;
	}
	else
	{
		cout << "x and y are not equal" << endl;
	}

	if (x <= y)
	{
		cout << "x is smaller or equal to y" << endl;
	}
	else if (z < x)
	{
		cout << "z is smaller than x" << endl;
	}

	string result = (y > z ? "y is greater than z" : "y is not greater than z");
	cout << result << endl;
}
