//============================================================================
// Name        : AllocatingMemory.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
public:
	Animal()
	{
		static int i = 0;
		cout << "Animal " << ++i << " created by the constructor" << endl;
	}
	Animal(const Animal &other): name(other.name)
	{
		cout << "Animal created by the copy constructor" << endl;
	}
	~Animal()
	{
		cout << "Animal destroyed by the destructor." << endl;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void speak() const
	{
		cout << "My name is: " << name << endl;
	}
};

int main()
{
	int *pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;


	Animal *pAnimal = new Animal[10];
	pAnimal[5].setName("Bobo");
	pAnimal[5].speak();

	delete []pAnimal;

	char *pMem = new char[1000];
	delete [] pMem;

	// print the alphabet
	for(char Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		cout << Alphabet << endl;
	}

	return 0;
}
