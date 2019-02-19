/*
 * Dog.cpp
 *
 *  Created on: 19 Feb 2019
 *      Author: endian
 */
#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog()
{
	cout << "Cat created!" << endl;
	happy = true;
}

Dog::~Dog()
{
	cout << "Cat destroyed" << endl;
}

void Dog::speak()
{
	if(happy)
	{
		cout << "Woof!" << endl;
	}
	else
	{
		cout << "AArrgg" << endl;
	}
}
