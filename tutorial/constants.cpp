#include "constants.h"
#include <iostream>

using namespace std;

void Constants::makeConstants ()
{
	// FIELDS

	const int MINUTES_PER_HOUR = 60;
	const float PI = 3.14;

	// OUTPUT

	cout << "MINUTES_PER_HOUR: " << MINUTES_PER_HOUR << endl;
	cout << "PI: " << PI << endl;
}
