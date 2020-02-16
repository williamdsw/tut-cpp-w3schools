#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
	public:

		// FIELDS

		string brand;
		string model;
		int year;

		// CONSTRUCTOR

		Car (string brand, string model, int year);

		// HELPER FUNCTIONS

		int speed (int maxSpeed);
};

#endif
