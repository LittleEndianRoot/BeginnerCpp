/*
 * Person.h
 *
 *  Created on: 20 Feb 2019
 *      Author: endian
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person
{
private:
	string name;
public:
	string getName();
	void setName(string newName);
};

#endif /* PERSON_H_ */
