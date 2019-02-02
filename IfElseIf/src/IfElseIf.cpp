/*
 * ============================================================================
 * Name        : IfElseIf.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	cout << "1. Add new record." << endl;
	cout << "2. Delete record." << endl;
	cout << "3. View record." << endl;
	cout << "4. Search record." << endl;
	cout << "5. Quit." << endl;
	cout << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if(value == 1)
	{
		cout << "Adding a new record." << endl;
	}
	else if(value == 2)
	{
		cout << "Deleting the record." << endl;
	}
	else if(value == 3)
	{
		cout << "Displaying record." << endl;
	}
	else if(value == 4)
	{
		cout << "Searching for a record." << endl;
	}
	else if(value == 5)
	{
		cout << "Quitting..." << endl;
	}
	else
	{
		cout << "Invalid selection." << endl;
	}
/*
	float fValue = 9.3;

	cout << fixed << setprecision(20) << fValue << endl;

	if(fValue == 9.3)
	{
		cout << "Equals." << endl;
	}
	else
	{
		cout << "Not equal." << endl;
	}
*/
	return 0;
}
