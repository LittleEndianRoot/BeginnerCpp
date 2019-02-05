/*
 * ============================================================================
 * Name        : WhileLoop.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */


#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while(i < 5)
	{
		cout << "We have looped " << i+1 << " times!" << endl;
		i++;
	}

	cout << "Program quitting." << endl;

	return 0;
}
