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
	 * key, that string of text will be stored in our fName variable.
	 */

	int age;
	/*
	 * Like with strings, we can also story integer input form the user.
	 * This variable here will store a whole number, in this case our age.
	 */
	cout << "Please enter your age: " << flush;
	cin >> age;

	cout << endl;

	cout << "Name: " << fName << "\nAge: " <<  age << endl;
	/*
	 * We then output the values that have been stored in these variables.
	 * You will see that the values the user has entered will be displayed in the
	 * output in the format shown here.
	 */

	return 0;
}
