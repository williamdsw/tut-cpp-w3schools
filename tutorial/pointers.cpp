#include "pointers.h"
#include <iostream>

using namespace std;

void Pointers::makePointers ()
{
	// FIELDS

	string developer = "Capcom";
	string* devPointer = &developer;

	// OUTPUT

	cout << "Developer: " << developer << endl;
	cout << "Pointer: " << devPointer << endl;
	cout << "Deference pointer: " << *devPointer << endl;

	*devPointer = "Sega";

	cout << "Developer: " << developer << endl;
	cout << "Pointer: " << devPointer << endl;
	cout << "Deference pointer: " << *devPointer << endl;
}
