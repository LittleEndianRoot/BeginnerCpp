//============================================================================
// Name        : Inheritance.cpp
// Author      : endian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

class Pokemon
{
public:
	void stats() { cout << "Display the pokemon stats" << endl; }
};

class Type: public Pokemon
{
public:
	void type() { cout << "Display the type for this pokemon" << endl; }
};

class FireType: public Type
{
public:
	void fire() { cout << "This pokemon is a fire type pokemon." << endl; }
};

class WaterType: public Type
{
public:
	void water() { cout << "This pokemon is a water type pokemon." << endl; }
};

class GrassType: public Type
{
public:
	void grass() { cout << "This pokemon is a grass type pokemon." << endl; }
};

int main()
{

	Pokemon poke;
	poke.stats();
	cout << endl;


	Type pokeType;
	pokeType.stats();
	pokeType.type();
	cout << endl;

	FireType tFire;
	tFire.stats();
	tFire.type();
	tFire.fire();
	cout << endl;

	WaterType tWater;
	tWater.stats();
	tWater.type();
	tWater.water();
	cout << endl;

	GrassType tGrass;
	tGrass.stats();
	tGrass.type();
	tGrass.grass();
	cout << endl;

	return 0;
}
