/*
 * ============================================================================
 * Name        : StringStreams.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
#include <sstream>

using namespace std;

int main()
{

	string name = "Bob";
	int age = 32;

	stringstream ss;

	// Convert all to a string
	ss << "Name is: " << name << "; Age is: " << age;

	string info = ss.str();

	cout << info << endl;

	return 0;
}
