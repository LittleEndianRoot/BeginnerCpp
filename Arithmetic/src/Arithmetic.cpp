/*
 * ============================================================================
 * Name        : Arithmetic.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * *=
 * /=
 * %
 * %=
 * precedence (PEMDAS)
 */

int main()
{

	double value1 = (double)7/3;
	cout << value1 << endl;

	int value2 = (int)7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1;     // Value3 = value3 +1 or value3++
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // value4 = value4/5
	cout << value4 << endl;

	int value5 = 13%5;
	cout << value5 << endl;

	// PEMDAS (Parenthesis, Exponents, Multiplication, Division, Addition, Subtraction
	double equation = ((5/4)%2)+(2.3*6); // don't do this: 5/4%2+2.3*6
	cout << equation << endl;


	return 0;
}
