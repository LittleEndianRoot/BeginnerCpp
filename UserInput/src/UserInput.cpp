/*
 * ============================================================================
 * Name        : UserInput.cpp
 * Author      : endian
 * Description : A program to show an example of some user input using the
 * 				 cin object.
 *============================================================================
 */

#include <iostream>

using namespace std;

int main()
{
	string fName;
	cout << "Please enter your first name: " << flush;
	cin >> fName;

	int age;
	cout << "Please enter your age: " << flush;
	cin >> age;

	cout << endl;

	cout << "Name: " << fName << "\nAge: " <<  age << endl;


	return 0;
}
