//============================================================================
// Name        : Encapsulation.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

class Frog
{
private:
	string name;
private:
	string getName() { return name; }
public:
	Frog(string name): name(name)
	{
		cout << "The name from the constructor in the Frog class is " << name << endl;
	}

	void info() { cout << "My name is: " << getName() << endl; }
};


int main()
{

	Frog frog("Freddy");
	//frog.getName();  Can't use frog.getName() because it is private
	frog.info();

	return 0;
}
