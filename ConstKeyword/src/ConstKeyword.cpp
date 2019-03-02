/*
 * ============================================================================
 * Name        : ConstKeyword.cpp
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
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; }
};

int main()
{

	const int PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;

	int *pValue = &value;
	//const int *pValue = &value;
	//int *const pValue = &value;
	//const int *const pValue = &value;

	cout << *pValue << endl;

	int number = 11;
	// Both errors with this: const int *const pValue = &value;
	pValue = &number; // Error with this: int *const pValue = &value;
	*pValue = 12; // Error with this: const int *pValue = &value;

	cout << *pValue << endl;


	return 0;
}
