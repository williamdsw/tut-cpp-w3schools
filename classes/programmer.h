#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "employee.h"

class Programmer : public Employee
{
	private:

		// FIELDS

		int bonus;

	public:

		// CONSTRUCTOR

		Programmer (int salary, int bonus);

		// GETTERS / SETTERS

		void setSalary (int salary);
		void setBonus (int bonus);

		int getSalary ();
		int getBonus ();
};

#endif
