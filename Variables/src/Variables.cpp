/*
 * Name:			Variables.cpp
 *
 *  Created on: 18 Jan 2019
 *      Author: endian
 *  An short example of demonstrating variables, the general idea of them
 *  and how they work. I will go into detail about the different types
 *  of variables later. For now I will stick with integer values for this
 *  demonstration.
 *  Even further down the line I will go into all the arithmetic logic and
 *  the different operators used in that.
 */
#include <iostream>

using namespace std;

int main()
{
	/*
	 * int means integer which means whole number, there can be no decimal place.
	 * Usually an int takes up 8 bytes of memory, it varies depending on the compiler
	 * With some compilers int can take 16 bytes of memory. There are more types than just int,
	 * I will explain the other types later, but for now we will stick with the int.
	 */
	int apples = 5;   //can be written: int apples = 5, bannanas = 8;
	int bananas = 8;
	/*
	 * here we created two int variables and labeled them apples and bananas, this action reserved
	 * two 8 byte blocks of space in our computers memory, and gave each the respective label.
	 * In this example I gave the int variables values, but it is not required to do so right now.
	 * We could have declared the values inside the variables later if chose to do so.
	 */

	int fruit = apples + bananas;
	/*
	 * with this variable, we created an int variable called fruit, we then let it equal to the sum of apples
	 * and bananas. NOTE: In this example if we did not declare the values inside of apples and bananas
	 * we would get a compiler error(or in my case just a warning), because the compiler can't sum two unknown values.
	 * Other compilers will just give garbage values in these variables and cause an error.
	 */
	cout << "Total number of apples: " << apples << endl;
	/*
	 * Now that we have our variable, we can now print them to the screen using the standard ostream (cout and endl)
	 * (((cout << "Total number of apples: ") << apples) << endl);
	 * This is an example of how the ostream is broken down each section in the parenthesis is passed in
	 * one step at a time, from the string, to the variable and finally the endl which does a new line, flush buffer command;
	 */
	cout << "Total number of bananas: " << bananas << endl;
	cout << "Total number of fruit: " << fruit << endl;
	// or you can say: cout << "Total number of fruit: " << apples + bananas << endl; if you want to use only two variables

	bananas = bananas + 3;
	/*
	 * This letting bananas equal to itself with 3 more. so I will write the values:
	 * bananas[8] = bananas[8] + [3] >> bananas[8] = bananas[11] >> bananas[11]
	 * the operations are performed from right to left.
	 * can be written: bananas += 3
	 */
	cout << "New total number of bananas: " << bananas << endl;
	// We print the new value of bananas which is 11
	cout << "New total number of fruit: " << fruit << endl;
	/*
	 * notice here fruit remains the same, even though we changed the value of bananas
	 * this is because fruit is still holding the previous value from the summing above, so it will print that value
	 * again, if we want new value we will have to re-sum fruit.
	 */
	fruit = apples + bananas;
	cout << "The true new value fo furit: " << fruit << endl;

	return 0;
}
