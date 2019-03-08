/*
 * Animals.h
 *
 *  Created on: 8 Mar 2019
 *      Author: endian
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace little
{

const string CATNAME = "Tiddles";

class Cat
{
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace little */

#endif /* ANIMALS_H_ */
