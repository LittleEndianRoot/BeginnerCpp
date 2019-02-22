/*
 * ============================================================================
 * Name        : ThisKeyword.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include "Person.h"

using namespace std;

int main()
{
	Person person1;
	Person person2("Graham", 29);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;

	cout << "Memory address of person1 is: " << &person1 << endl;
	cout << "Memory address of person2 is: " << &person2 << endl;

	return 0;
}
