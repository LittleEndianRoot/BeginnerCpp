/*
 * Person.cpp
 *
 *  Created on: 22 Feb 2019
 *      Author: endian
 */

#include <sstream>
#include "Person.h"

string Person::toString()
{
	stringstream ss;

	ss << "Name: " << name << "; Age: " << age;

	return ss.str();
}

