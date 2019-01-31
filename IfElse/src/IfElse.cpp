/*
 * ============================================================================
 * Name        : IfElse.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

int main() {

	cout << "1.\tAdd record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter a selection > " << flush;

	int value;
	cin >> value;
	cout << endl;

	if(value < 3)
	{
		cout << "Insufficient privileges to use this menu option." << endl;
	}
	else
	{
		cout << "Access granted" << endl;
	}

	if(value == 5)
	{
		cout << "Quitting" << endl;
	}
	else
	{
		cout << "not quitting." << endl;
	}



	return 0;
}
