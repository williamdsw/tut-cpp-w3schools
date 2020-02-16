#include "programmer.h"

Programmer::Programmer (int salary, int bonus)
{
	this -> salary = salary;
	this -> bonus = bonus;
}

// GETTERS / SETTERS

void Programmer::setSalary (int salary)
{
	this -> salary = salary;
}

void Programmer::setBonus (int bonus)
{
	this -> bonus = bonus;
}

int Programmer::getSalary ()
{
	return this -> salary;
}

int Programmer::getBonus ()
{
	return this -> bonus;
}
