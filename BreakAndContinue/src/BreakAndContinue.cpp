/*
 * ============================================================================
 * Name        : BreakAndContinue.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

int main()
{

	for(int i=0; i<5; i++)
	{
		cout << "i is " << i << endl;

		if(i==3)
		{
			break;
		}

		cout << "looping..." << endl;

	}


	for(int i=0; i<5; i++)
	{
		cout << "i is " << i << endl;

		if(i==3)
		{
			continue;
		}

		cout << "looping..." << endl;
	}

	cout << endl << "program quitting..." << endl;

	/*
	const string password = "Hello";
	string input;

	do
	{
		cout << "Please enter your password: " << endl;
		cin >> input;

		if(input == password)
		{
			break;
		}

		cout << "Access Denied!" << endl;

	}while(true);

	cout << endl << "Password Accepted!" << endl;
	*/
	cout << "Program quitting..." << endl;

	return 0;
}
