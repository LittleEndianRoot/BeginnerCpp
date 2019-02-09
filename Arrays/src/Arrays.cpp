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

	cout << "Array of integers" << endl;
	cout << "=================" << endl;

	int values[3];

	values[0] = 56;
	values[1] = 135;
	values[2] = 4;

	for(int i=0; i<3; i++)
	{
		cout << "Element at index " << values[i] << endl;
	}

	cout << endl << "Array of doubles" << endl;
	cout << "================" << endl;

	double numbers[4] = {1.3, 6.3, 35.5, 93.3};

	for(int i=0; i<4; i++)
	{
		cout << "Element at index " << numbers[i] << endl;
	}

	cout << "Initializing with zero values" << endl;
	cout << "===============" << endl;

	int numberArray[8] = {};

	for(int i=0; i<8; i++)
	{
		cout << "Element at index " << numberArray[i] << endl;
	}

	//Array of strings
	//auto size array
	cout << "initializing with strings" << endl;
	cout << "===============" << endl;

	string text[] = {"apple", "banana", "orange"};

	for(int i=0; i<3; i++)
	{
		cout << "Element at index " << text[i] << endl;
	}

	return 0;
}
