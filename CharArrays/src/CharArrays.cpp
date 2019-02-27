/*
 * ============================================================================
 * Name        : CharArrays.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

int main()
{

	char text[] = "hello";

	for(unsigned int i =0; i < sizeof(text); i++)
	{

		cout << i+1 << ":" << text[i] << endl;
		if(text[i] == 0)
		{
			cout << "null termination character is: \\" << (int)text[i] << endl;
		}
	}

	int k = 0;
	while(true)
	{
		if(text[k] == 0)
		{
			break;
		}
		cout << text[k] << flush;
		k++;
	}

	return 0;
}
