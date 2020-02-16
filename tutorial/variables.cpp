#include "variables.h"
#include <iostream>

using namespace std;

void Variables::makeVariables ()
{
	// FIELDS

	int myInteger = 65;
	double myDouble = 19.532;
	char myChar = 'w';
	string myString = "Something here...";
	bool myBoolean = false;

	// OUTPUT

	cout << "myInteger: " << myInteger << endl;
	cout << "myDouble: " << myDouble << endl;
	cout << "myChar: " << myChar << endl;
	cout << "myString: " << myString << endl;
	cout << "myBoolean: " << myBoolean << endl;
}
