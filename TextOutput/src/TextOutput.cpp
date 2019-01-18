/*
 * Name:			TextOutput.cpp
 *
 *  Created on: 18 Jan 2019
 *      Author: endian
 *
 *  A basic example of different ways to output text
 *  Demonstrate some basic formatting and control characters
 */
#include <iostream>

using namespace std;

int main()
{
	cout << "There is an end line carriage return at the end, " << endl;
	cout << endl;
	cout << "Multiple " << "text " << "on " << "same " << " line."<< endl;
	cout << endl;
	cout << "This one will use flush at the end..." << flush;
	cout << "no carriage return." << endl;
	cout << endl;
	cout << "This is an example\nof some multi-line text\nusing the newline control character." << endl;
	cout << endl;
	cout << "The Tab\t\t\t x3 escape character" << endl;
	cout << endl;
	cout << "The return \rescape character" << endl;

	return 0;
}

/*
 * String literals escape characters
 *
 * List of control characters:
 * (Hex codes assume an ASCII-compatible character encoding.)
 * \a = \x07 = alert (bell)
 * \b = \x08 = backspace.
 * \t = \x09 = horizontal tab.
 * \n = \x0A = newline (or line feed)
 * \v = \x0B = vertical tab.
 * \f = \x0C = form feed.
 * \r = \x0D = carriage return.
 * \e = \x1B = escape (non-standard GCC extension)
 *
 * Punctuation Characters:
 * \" = quotation mark (backslash not required for '"')
 * \' = apostrophe (backslash not required for "'")
 * \? = question mark (used to avoid trigraphs)
 * \\ = backslash
 *
 * Numeric character references:
 * \ + up to 3 octal digits
 * \x + any number of hex digits
 * \u + 4 hex digits (Unicode BMP, new in C++11)
 * \U + 8 hex digits (Unicode astral planes, new in C++11)
 *
 * \0 = \00 = \000 = octal escape for null character
 * \0 = null termination character
 *
 *
 * credit for info: dan04 on stckoverflow.com
 * link for original thread
 * here: https://stackoverflow.com/questions/10220401/rules-for-c-string-literals-escape-character
 */
