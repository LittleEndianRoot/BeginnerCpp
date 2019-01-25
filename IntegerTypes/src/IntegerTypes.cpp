/*
 * ============================================================================
 * Name        : BinaryTutorial.cpp
 * Author      : endian
 * Description : This program will take you through all the different integer
 * 				 types and the meaning behind them.
 *============================================================================
 */

#include <iostream>
#include <limits>

using namespace std;

int main() {

	int value = 54656;
	cout << value << endl;

	long int lValue = 2345325345345;
	cout << lValue << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of long int: " << sizeof(long int ) << endl;



	return 0;
}
