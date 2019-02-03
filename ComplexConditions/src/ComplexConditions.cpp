/*
 * ============================================================================
 * Name        : ComplexConditions.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

/*
 * == equality test
 * != not equal
 * < less than
 * > greater than
 * <= less than of equal to
 * >= greater than or equal to
 */

#include <iostream>
using namespace std;

int main()
{
	int value1 = 7;
	int value2 = 4;

	if(value1 < 8)
	{
		cout << "Condition 1: true" << endl;
	}
	else
	{
		cout << "Condition 1: false" << endl;
	}

	return 0;
}
