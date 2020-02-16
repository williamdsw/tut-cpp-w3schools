#include "example-overloading.h"
#include <iostream>

using namespace std;

int ExampleOverloading::sum (int x, int y)
{
	return x + y;
}

float ExampleOverloading::sum (float x, float y)
{
	return x + y;
}

double ExampleOverloading::sum (double x, double y)
{
	return x + y;
}
