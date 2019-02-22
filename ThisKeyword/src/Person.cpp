/*
 * Person.cpp
 *
 *  Created on: 22 Feb 2019
 *      Author: endian
 */
#include <sstream>
#include "Person.h"

Person::Person()
{
	name = "Undefined";
	age = 0;
	cout << "The blank person constructor is created\n\n" << endl;
	cout << "The memory address of object " << name << ": " << this << endl;
}



Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
	cout << "The Person constructor that has the string and the int arguments passed is created" << endl;
	cout << "The memory address of object " << name << ": "  << this << endl;
}

Person::~Person()
{
	cout << "Person: " << name << " is dead!" << endl;
}

string Person::toString()
{
	stringstream ss;

	ss << "Name is: " << name << "; Age is: " << age;

	return ss.str();
}


