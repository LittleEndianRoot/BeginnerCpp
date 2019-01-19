/*
 * ============================================================================
 * Name        : UserInput.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>

using namespace std;

int main()
{
	string fName;
	cout << "Please enter your first name: " << endl;
	cin >> fName;

	int age;
	cout << "Please enter your age: " << endl;
	cin >> age;

	cout << "Name: " << fName << "\nAge: " <<  age << endl;


	return 0;
}
