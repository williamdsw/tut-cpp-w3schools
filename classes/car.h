#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
	private:

		// FIELDS

		string brand;
		string model;
		int year;
		int maxSpeed;

	public:

		// CONSTRUCTOR

		Car (string brand, string model, int year, int maxSpeed);

		// GETTERS / SETTERS

		void setBrand (string brand);
		void setModel (string model);
		void setYear (int year);
		void setMaxSpeed (int maxSpeed);

		string getBrand ();
		string getModel ();
		int getYear ();
		int getMaxSpeed ();
};

#endif
