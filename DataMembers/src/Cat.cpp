/*
 * Cat.cpp
 *
 *  Created on: 18 Feb 2019
 *      Author: endian
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak()
{
	if(happy)
	{
		cout << "Meow!" << endl;
	}
	else
	{
		cout << "SSsss" << endl;
	}
}

void Cat::makeHappy()
{
	happy = true;
}

void Cat::makeSad()
{
	happy = false;
}
