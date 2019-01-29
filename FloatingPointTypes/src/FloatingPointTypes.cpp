/*
 * ============================================================================
 * Name        : FloatingPointTypes.cpp
 * Author      : endian
 * Description : This is a program to show you the different types of floating
 * 				 point types. Or in other words types that have decimal points
 * 				 in the number. We get to see the precision of the different
 * 				 types of floating point numbers.
 *============================================================================
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	float fValue = 123.4512378f;

	cout << "The size of float is: " << sizeof(float) << " bytes" << endl;
	cout << setprecision(20) << fValue << endl;

	double dValue = 123.4512378;

	cout << "The size of double is: " << sizeof(double) << " bytes" << endl;
	cout << setprecision(20) << dValue << endl;

	long double lValue = 123.4512378;

	cout << "The size of long double is: " << sizeof(long double) << " bytes" << endl;
	cout << setprecision(20) << lValue << endl;

	return 0;
}
