/*
 * ============================================================================
 * Name        : CharAndBool.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */
#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
	cout << "Starting program..." << endl;

	{
		Dog dog;
		dog.speak();
	}

	cout << "Ending program..." << endl;

	return 0;
}
