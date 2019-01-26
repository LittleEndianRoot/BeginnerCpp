/*
 * ============================================================================
 * Name        : IntegerTypes.cpp
 * Author      : endian
 * Description : This program will take you through all the different integer
 * 				 types and the meaning behind them.
 *============================================================================
 */

#include <iostream>
#include <climits>

using namespace std;

int main() {

	int value = 54656;
	cout << value << endl;
	cout << endl;

	cout << "Maximum integer value: " << INT_MAX << endl;
	cout << "Minimum integer value: " << INT_MIN << endl;
	cout << endl;

	long int lValue = 2345325345345;
	cout << lValue << endl;
	cout << endl;

	short int sValue = 23434;
	cout << sValue << endl;
	cout << endl;

	cout << "Size of int in bytes: " << sizeof(int) << endl;
	cout << "Size of short int in bytes: " << sizeof(short int) << endl;
	cout << "Size of long int int bytes: " << sizeof(long int ) << endl;



	return 0;
}
