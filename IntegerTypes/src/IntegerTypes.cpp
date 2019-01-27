/*
 * ============================================================================
 * Name        : IntegerTypes.cpp
 * Author      : endian
 * Description : In this program we will dive a little deeper into the integer
 * 				 variable type. We will explore different types of integers,
 * 				 find out what the maximum and minimum values are that can be
 * 				 stored within the int. How much memory does an integer need in
 * 				 our RAM etc.
 *============================================================================
 */

#include <iostream>
#include <limits.h>
/*
 * Here I included the <limits.h> header file so we can use some of it's extra features
 * like INT_MAX and INT_MIN.
 * NOTE: for my compiler I have to use <limits.h> or <climits>, other compilers can also use
 * just <limits>
 */

using namespace std;

int main() {

	//Regular int variable
	int value = 54656;
	cout << value << endl;
	cout << endl;

	// long int is an int variable type that can hold larger values, (can also be written as long)
	long int lValue = 2345325345345;
	cout << lValue << endl;
	cout << endl;
	// short in is a smaller int variable type (can also be written as just short)
	short int sValue = 23434;
	cout << sValue << endl;
	cout << endl;

	/*
	 * The next three examples are what are known as unsigned variables, this unsigned means that
	 * they can not have minus sign in front of the value that is stored. So this means all of these
	 * values are positive.
	 */
	unsigned int uValue = 2342343;
	cout << uValue << endl;
	cout << endl;

	unsigned long ulValue = 234252352;
	cout << ulValue << endl;
	cout << endl;

	unsigned short usValue = 23432;
	cout << usValue << endl;
	cout << endl;

	/*
	 *  We can now see a list of the max and min values that can be stored in each integer types,
	 *  notice that the unsigned versions of the different integer types do not have a MIN version
	 *  this is because there are no negative values for these types, so the MIN will be 0.
	 */
	cout << "The max value of int: " << INT_MAX << endl;
	cout << "The min value of int: " << INT_MIN << endl;
	cout << endl;

	cout << "The Max value of long: " << LONG_MAX << endl;
	cout << "The Min value of long: " << LONG_MIN << endl;
	cout << endl;

	cout << "The Max value of short: " << SHRT_MAX << endl;
	cout << "The Min value of short: " << SHRT_MIN << endl;
	cout << endl;

	cout << "The Max value of unsigned int: " << UINT_MAX << endl;
	cout << endl;

	cout << "The Max value of unsigned long: " << ULONG_MAX << endl;
	cout << endl;

	cout << "The Max value of unsigned short: " << USHRT_MAX << endl;
	cout << endl;

	/*
	 * Now that we have seen the size each value can hold, lets take a look at how much
	 * memory is required for each of these variable types.
	 * Here we use the sizeof() operator, with this operator we can see how much bytes
	 * in memory all the variable types are using.
	 */
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
	cout << "Size of long int: " << sizeof(long int ) << " bytes" << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
	cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << endl;

	return 0;
}
