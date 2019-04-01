//============================================================================
// Name        : BitShifting.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	unsigned char alpha = 0xff;
	unsigned char red = 0x12;
	unsigned char green = 0x34;
	unsigned char blue = 0x56;

	unsigned int colour = 0;

	colour += alpha;
	colour <<= 8;
	colour += red;
	colour <<= 8;
	colour += green;
	colour <<=8;
	colour += blue;

	cout << "0x" << setfill('0') << setw(8) << hex << colour << endl;


	return 0;
}
