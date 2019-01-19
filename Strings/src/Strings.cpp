/*
 * ============================================================================
 * Name        : Variables.cpp
 * Created on  : 18 Jan 2019
 * Author      : endian
 * Description : A short example of strings, what they are and a demonstration
 * 				 of something known as string concatenation.
 *============================================================================
 */
#include <iostream>
/*
 * some compilers deal with strings differently, for example if
 * you are getting an error with the stings try including
 * #include <string> or given the string type a capital S when you
 * create them. E.g String text1 = "stuff";
 */
using namespace std;

int main()
{
	string text1 = "Hello there "; //I put a space at the end here for formatting
	string text2 = "Tony Stark";
	/*
	 * As you can see, we declare strings in a similar fashion to integers.
	 * we have the type string, name, and the value it equals. Notice the
	 * value is in double quotes, this signifies a string.
	 */
	string text3 = text1 + text2;
	/*
	 * Similar to int, C++ allows us to sum multiple strings together. This
	 * is known as concatenation.
	 */

	cout << text1 << endl; // output text1
	cout << text2 << endl; // output text2
	cout << text1 << text2 << endl; // output both(we seen an example of this earlier)
	cout << text3 << endl; // output text3, which is the concatenation of text1 and text2

	return 0;
}

/*
 * EXTRA INFO:
 * Technically C++ does not have a variable type called string, a string is
 * just an Array of chars that are bound together by a function in the standard library.
 * This string function lets us use string like a normal variable.
 * I will explain more about Arrays and char types later.
 */
