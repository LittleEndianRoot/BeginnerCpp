//============================================================================
// Name        : GettersAndSetters.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person person;

	person.setName("Little Endian");

	cout << "The name of the person with the get method is: " << person.getName() << endl;

	return 0;
}
