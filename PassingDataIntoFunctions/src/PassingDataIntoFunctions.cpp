/*
 * ============================================================================
 * Name        : PassingDataIntoFunctions.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

void printMenu()
{
	cout << "===FOOD MENU===" << endl;
	cout << "1. Burger " << endl;
	cout << "2. Chips " << endl;
	cout << "3. Onion rings " << endl;
	cout << "4. Milk-shake " << endl;
	cout << "5. Quit " << endl;
	cout << endl << ">> " << flush;
}

int userSelection()
{
	int choice;
	cin >> choice;

	return choice;
}

void printChoice(int userChoice)
{
	switch(userChoice)
	{
	case 1:
		cout << "Burger selected!" << endl;
		break;
	case 2:
		cout << "Chips selected!" << endl;
		break;
	case 3:
		cout << "Onion rings selected " << endl;
		break;
	case 4:
		cout << "Milk-shake selected " << endl;
		break;
	case 5:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Unknown selection " << endl;

	}
}

int main()
{

	printMenu();
	int userChoice = userSelection();
	printChoice(userChoice);

	return 0;
}
