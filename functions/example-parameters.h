#ifndef EXAMPLE_PARAMETERS_H
#define EXAMPLE_PARAMETERS_H

#include <iostream>
using namespace std;

class ExampleParameters
{
	public:
		void printName (string name);						// Parameter
		void printCountryName (string country = "Brazil");	// Default parameter
		void printPersonInfo (string name, int age);		// Multiple parameters
		int sum (int a, int b);								// Return values
		void swap (int &a, int &b);							// Pass by Reference
};

#endif
