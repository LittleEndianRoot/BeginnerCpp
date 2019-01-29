/*
 * ============================================================================
 * Name        : CharAndBool.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

int main()
{
	bool bValue = true;
	bool fValue = false;
	bool mValue = 67;
	cout << "Bool value when it's true: " << bValue << endl;
	cout << "Bool value when it's false: " << fValue << endl;
	cout << "Bool value when it's any number other than 0: " << mValue << endl;

	char cValue = 'g';
	cout << "Char with character 'g': " << cValue << endl;
	cout << "When we cast that value to an int: " << (int)cValue << endl;

	cout << "The size of a Char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << "The ASCII index value of 'i': " << wValue << endl;
	cout << "When we cast that index value to a char: " << (char)wValue << endl;

	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
