/*
 * ============================================================================
 * Name        : Pointers.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

/* copy the value
void manipulate(double value)
{
	cout << "2. Value of double in manipulate: " << value << endl;
	value = 10.0;
	cout << "3. Value of double in manipulate: " << value << endl;
}
*/

void manipulate(double *pValue)
{
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of double in manipulate: " << *pValue << endl;
}

int main()
{

	int nValue = 8;

	int *pnValue = &nValue;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to Int address: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl;

	cout << "========================" << endl;
	double dValue = 123.4;
	/* copy the value
	cout << "1. dValue: " << dValue << endl;
	manipulate(dValue);
	cout << "4. dValue: " << dValue << endl;
	 */

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "2. dValue: " << dValue << endl;

	return 0;
}
