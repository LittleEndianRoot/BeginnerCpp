/*
 * ============================================================================
 * Name        : Functions.cpp
 * Author      : endian
 * Description :
 *============================================================================
 */

#include <iostream>
using namespace std;

void showMenu()
{
	cout << "===FAST FOOD MENU===" << endl;
	cout << "1. Burger" << endl;
	cout << "2. Chips" << endl;
	cout << "3. Onion rings" << endl;
	cout << "4. Milk-shake" << endl;
	cout << "5. Quit" << endl << ">> " << flush;
}

void showChoice()
{
	int choice;
	cin >> choice;

	switch(choice)
	{
	case 1:
		cout << "You ordered a Burger!" << endl;
		break;
	case 2:
		cout << "You ordered Chips!" << endl;
		break;
	case 3:
		cout << "You ordered Onion rings" << endl;
		break;
	case 4:
		cout << "You ordered a Milk-shake" << endl;
		break;
	case 5:
		cout << "Quitting....." << endl;
		break;
	default:
		cout << "Unknown result" << endl;
	}
}

int main()
{
	showMenu();
	showChoice();

	return 0;
}
