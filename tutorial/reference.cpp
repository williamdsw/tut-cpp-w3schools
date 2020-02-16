#include "reference.h"
#include <iostream>

using namespace std;

void Reference::makeReference ()
{
	// FIELDS

	string developer = "Capcom";
	int someInt = 34;
	float someFloat = 1.456;
	bool someBoolean = true;

	// Output

	cout << developer << " is allocated at " << &developer << endl;
	cout << someInt << " is allocated at " << &someInt << endl;
	cout << someFloat << " is allocated at " << &someFloat << endl;
	cout << someBoolean << " is allocated at " << &someBoolean << endl;
}
