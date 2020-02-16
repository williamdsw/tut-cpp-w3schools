#include "struserinput.h"
#include <iostream>
#include <string>

using namespace std;

void StrUserInput::makeStrUserInput ()
{
	// FIELDS

	string fullName = "";

	// OUTPUT / INPUT

	cout << "Type your full name: ";
	getline (cin, fullName);
	cout << "Your name is: " << fullName << endl;
}



