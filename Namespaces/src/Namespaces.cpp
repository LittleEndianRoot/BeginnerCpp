//============================================================================
// Name        : Namespaces.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include "Cat.h"
#include "Animals.h"

// This is optional with the ::
using namespace little;

int main()
{

	little::Cat cat1;
	cat1.speak();

	endian::Cat cat2;
	cat2.speak();

	cout << little::CATNAME	<< endl;
	cout << endian::CATNAME << endl;

	cout << CATNAME << endl;

	return 0;
}
