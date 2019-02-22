/*
 * Person.h
 *
 *  Created on: 22 Feb 2019
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
	int age;
public:
	Person();
	Person(string name, int age);
	~Person();
	string toString();
};

#endif /* PERSON_H_ */
