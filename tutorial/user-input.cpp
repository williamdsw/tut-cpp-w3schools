#include "user-input.h"
#include <iostream>

using namespace std;

void UserInput::makeUserInput ()
{
	// FIELDS

	int x = 0;
	int y = 0;
	int sum = 0;

	// OUTPUT

	cout << "Type first number: ";
	cin >> x;

	cout << "Type second number: ";
	cin >> y;

	sum = x + y;
	cout << "Sum is: " << sum;
}
