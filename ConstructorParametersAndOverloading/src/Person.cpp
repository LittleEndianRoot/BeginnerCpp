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
	name = "Undifined";
	age = 0;

}

Person::Person( string newName, int newAge)
{
	name = newName;
	age = newAge;
}

string Person::toString()
{
	stringstream ss;

	ss << "Name: " << name << "; Age: " << age;

	return ss.str();

}

