/*
 * ============================================================================
 * Name        : UserInput2.cpp
 * Author      : endian
 * Description : Part 2 of the user input demonstration, you may have noticed in the last
 * 				 program that there was and issue if we tried to pass two or
 * 				 more words in the same cin object. This program will demonstrate
 * 				 how to get around this problem using the getline() function.
 * 				 I will touch on some other things here too.
 *============================================================================
 */

#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your name: " << flush;
	getline(cin, name);
	/*
	 * This layout is generally the same as the previous, but in this case the difference
	 * is with the getline() function. With this function the user can input the first name
	 * and surname, which will work. The reason is because getline() prints the output until
	 * it reaches a delimiter character e.g EOL(End Of Line), EOF(End Of FIle) \n etc
	 */

	string studentID;
	cout << "Please enter your Student ID: " << flush;
	cin >> studentID;

	int age;
	cout << "Please enter your age: " << flush;
	cin >> age;

	string DOB;
	cout << "Please enter your date of birth: " << flush;
	cin >> DOB;

	string degree;
	cout << "Please enter the degree your are studying: " << flush;
	cin >> degree;

	cout << endl;
	cout << endl;
	/*
	 * Everything else in this program was similar to what we have seen before,
	 * and for the output format we are creating a personal details record
	 * of a person, and displaying it to the screen in this format.
	 */
	cout << "Student Name: " << name << endl;
	cout << "Student ID:   " << studentID << endl;
	cout << "Age:          " << age << endl;
	cout << "D.O.B:        " << DOB << endl;
	cout << "Degree:       " << degree << endl;

	return 0;
}
