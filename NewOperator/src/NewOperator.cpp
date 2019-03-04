/*
 * ============================================================================
 * Name        : NewOperator.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
public:
	Animal()
	{
		cout << "Animal created." << endl;
	}

	Animal(const Animal &other) : name(other.name)
	{
		cout << "Animal created by copying." << endl;
	}

	~Animal()
	{
		cout << "Animal destroyed" << endl;
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

	Animal *pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	delete pCat1;

	cout << sizeof(pCat1) << endl;

	return 0;
}
