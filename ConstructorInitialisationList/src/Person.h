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
	Person(): name("blank"), age(0) {};
	Person(string name, int age): name(name), age(age) {};
	~Person() {};
	string toString();
};

#endif /* PERSON_H_ */
