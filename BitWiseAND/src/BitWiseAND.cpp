//============================================================================
// Name        : BitWiseAND.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int color = 0x123456;

	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue = (color & 0x0000FF);

	cout << "Red: " << hex << (int)red << endl;
	cout << "Green: " << hex << (int)green << endl;
	cout << "Blue: " << hex << (int)blue << endl;

	// Bitwise ANDing
	// color: 100110111010110101110010
	// Mask:  111111110000000000000000
	// AND:   100110110000000000000000

	return 0;
}
