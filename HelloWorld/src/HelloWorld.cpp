//Name			:HelloWorld.cpp
#include <iostream>
/*
 * Anything with a # prefixed is know as a pre-processor statement,
 * A pre-processor statement is known before compile time.
 * the #include pre-processor statements job is to copy all contents from a file in the < >
 * and paste it to where it is called in our program.
 * So #include <iostream> is just copy and paste all contents from the file iostream to this location.
 * More about pre-processor statements at a later time.
 */
using namespace std;
/*
 * Essentially anything from the std (standard) namespace will not have to be prefixed with std::
 * when we wnat to use it. For example cout << "Hello" << endl; would be written like this
 * std::cout << "Hello" << std::endl; because cout and endl are in the std namespace
 * Here we are telling the compiler we are using this namespace in this .cpp file.
 * using namespace will be covered at a later time.
 */

int main()
/*
 * The main is the entry point,
 * the first location your compiler searches for,
 * to begin compiling your program
 */
{
	cout << "Hello World!" << endl; // Prints Hello World to the screen to the standard output (ostream)
	return 0;
}


/*
 * int main () {}
 * is known as a function, each function is made up of 4 parts
 * 1) The return type => [int] tells the programmer and compiler that this function returns and integer(whole number)
 * if the function returns a 0, then it executed without any problems, anything else is an error.
 * 2) The function name => [main] each function must have a unique name to identify itself
 * (or a different number of arguments passed into the parameters list)
 * 3) The parameter list => () holds all the arguments that are passed to this function.
 * 4) Function body => {} The function body holds the list of statements that are contained inside the function.
 */
