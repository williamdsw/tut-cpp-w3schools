#include "car.h"

// CONSTRUCTOR

Car::Car (string brand, string model, int year, int maxSpeed)
{
	this -> brand = brand;
	this -> model = model;
	this -> year = year;
	this -> maxSpeed = maxSpeed;
}

// GETTERS / SETTERS

void Car::setBrand (string brand)
{
	this -> brand = brand;
}

void Car::setModel (string model)
{
	this -> model = model;
}

void Car::setYear (int year)
{
	this -> year = year;
}

void Car::setMaxSpeed (int maxSpeed)
{
	this -> maxSpeed = maxSpeed;
}

string Car::getBrand ()
{
	return this -> brand;
}

string Car::getModel ()
{
	return this -> model;
}

int Car::getYear ()
{
	return this -> year;
}

int Car::getMaxSpeed ()
{
	return this -> maxSpeed;
}
