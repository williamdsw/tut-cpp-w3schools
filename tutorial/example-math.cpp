#include "example-math.h"
#include <iostream>
#include <cmath>

using namespace std;

void ExampleMath::makeExamplePath ()
{
	// FIELDS

	double w = 10.64;
	int x = 3;
	int y = 5;
	int z = 49;
	int max = std::max (x, y);
	int min = std::min (x, y);
	int squareRoot = sqrt (z);
	int rounded = round (w);
	double currentLog = log (w);

	// OUTPUT

	cout << "w = " << w << ", x = " << x << ", y = " << y << ", z = " << z << endl;
	cout << "max (x, y) = " << max << endl;
	cout << "min (x, y) = " << min << endl;
	cout << "sqrt (z) = " << squareRoot << endl;
	cout << "round (w) = " << rounded << endl;
	cout << "log (y) = " << currentLog << endl;
}
