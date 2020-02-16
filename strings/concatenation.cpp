#include "concatenation.h"
#include <iostream>
#include <string>

using namespace std;

void Concatenation::makeConcatenation ()
{
	// FIELDS

	string firstName = "Trent";
	string lastName = "Reznor";
	string fullName = firstName + " " + lastName;
	string otherFullName = firstName.append (" ").append (lastName);

	// OUTPUT

	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Full Name: " << fullName << endl;
	cout << "Other Full Name: " << otherFullName << endl;
}
