//============================================================================
// Name        : ConstructorInitialisationList.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Person.h"

int main()
{
	Person person1;
	Person person2("Graham", 29);
	Person person3("Maria", 27);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
