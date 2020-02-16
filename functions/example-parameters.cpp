#include "example-parameters.h"

void ExampleParameters::printName (string name)
{
	cout << name << endl;
}

void ExampleParameters::printCountryName (string country)
{
	cout << country << endl;
}

void ExampleParameters::printPersonInfo (string name, int age)
{
	cout << name << " is " << age << " years old!" << endl;
}

int ExampleParameters::sum (int a, int b)
{
	return a + b;
}

void ExampleParameters::swap (int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

