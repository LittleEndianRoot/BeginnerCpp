/*
 * ============================================================================
 * Name        : PointerArithmetic.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

int main()
{

	const int NSTRINGS = 5;

	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

	string *pTextsStart = &texts[0];
	string *pEnd = &texts[NSTRINGS-1];

	cout << "The start of the array: "<< *pTextsStart << endl << endl;
	pTextsStart += 3;
	cout << "Adding 3 to the start: " << *pTextsStart << endl << endl;

	pTextsStart -= 2;
	cout << "Subtract 2 from current position: "<< *pTextsStart << endl << endl;

	pTextsStart = &texts[0];

	while(pTextsStart <= pEnd)
	{
		cout << "Looping array: " << *pTextsStart << endl;
		++pTextsStart;
	}

	pTextsStart = &texts[0];

	long elements = (long)(pEnd - pTextsStart);

	cout << endl << "Number of elements in the array: " << elements << endl;

	pTextsStart = &texts[0];

	pTextsStart += NSTRINGS/2;
	cout << endl << "Midpoint of the array: " << *pTextsStart << endl;



	return 0;
}
