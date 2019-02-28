//============================================================================
// Name        : ReversingAString.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	char text[] = "hello there everyone! :)";

	for(int i = sizeof(text)-1; i > -1; i--)
	{
		if(text[i] == 0)
		{

		}
		else
		{
			cout << text[i] << flush;
		}
	}

	/*// A method with pointers and a while loop
		char text[] = "hello there everyone!";

		int nChars = sizeof(text)-1;

		char *pStart = text;
		char *pEnd = text + nChars -1;

		while(pStart < pEnd)
		{
			char save = *pStart;
			*pStart = *pEnd;
			*pEnd = save;

			pStart++;
			pEnd--;
		}

		cout << text << endl;
	*/


	return 0;
}
