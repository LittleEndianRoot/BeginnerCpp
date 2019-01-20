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
	/*
	 * Create a string variable with no declared value, we can use this to store
	 * a value we input later.
	 */
	cout << "Please enter your first name: " << flush;
	cin >> fName;
	/*
	 * now we use cin to wait for input from the user, once the user hits the return
	 * key, that string of text will be stored in our fName variable
	 */

	int age;
	cout << "Please enter your age: " << flush;
	cin >> age;

	cout << endl;

	cout << "Name: " << fName << "\nAge: " <<  age << endl;


	return 0;
}
