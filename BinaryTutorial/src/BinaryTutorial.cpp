/*
 * ============================================================================
 * Name        : BinaryTutorial.cpp
 * Author      : endian
 * Description : This program will take your through the steps of how the binary
 * 				 number system works, and I will show some easy way to calculate
 * 				 and convert from different number systems.
 *============================================================================
 */


#include <iostream>
using namespace std;

int main() {

	/*
	 * To understand the binary number system, I first want to touch on the
	 * number system that all of us are familiar with.
	 * That is the decimal system, which uses base 10 [0-9] as a way to
	 * count. The reason we use base 10 is because normally humans have
	 * 10 fingers so it would be easy to keep track of what we are counting.
	 *
	 * For example:
	 * 			The number 372 in decimal. You probably remember from school
	 * 			the way we represent this number is like so:
	 *
	 * 			3(100) 7(10) 2(1)
	 * 			or
	 * 			3 x 100, 7 x 10, 2 x 1
	 * 			or
	 * 			Three one-hundreds, seven tens, two ones.
	 * As we can see with the decimal system, everything works in 10s.
	 *
	 * example:
	 *
	 * 			If we wanted to display 10, 100, 1000.
	 *
	 * 			10 is just 10
	 * 			100 is 10x10
	 * 			1000 is 10x10x10
	 *
	 * We can apply the same knowledge to the binary system, which uses base 2 [0 and 1]
	 * So with only 2 numbers in the binary system numbers here will just looks like
	 * strings of 1s and 0s.
	 * At this point you might be asking, why do computers use binary?? Why would they not just
	 * use decimal??
	 * This is a valid question:
	 * The reason computers use binary is because of the flow of electricity.(or lack of)
	 * What I mean by this is, think of binary like a switch 1 can signify ON and 0 can signify OFF
	 * when current is flowing this is a 1 in binary and when there is no current this is a 0.
	 * It is good to think about this in terms of switches, because inside of your computer there are
	 * a lot of silicon chips, your CPU is one. Inside of these chips are transistors smaller than a grain
	 * of sand. These transistors are essentially electrically controlled switches that allow or disallow
	 * the flow of electricity. The CPU inside of your PC can have billions of these tiny transistors
	 * inside, all working together to do complex calculations.
	 *
	 * How do we convert binary to decimal so we know what value we are looking at?
	 *
	 * Example:
	 *
	 * 			1011 = ?? how can we find out this value?
	 *
	 * 			we can do the same as with the base 10 decimal system.
	 *
	 * 			    1              0              1            1
	 * 		       /               |              |             \
	 * 		1 x (2x2x2)	        0 x (2x2)       1 X 2         1 x 1
	 * 		   |                   |              |             |
	 * 		 1 x 8               0 x 4            2             1
	 * 		   |                   |              |             |
	 * 		   8         +         0       +      2      +      1
	 *
	 * 		                          11
	 *
	 * 			When we convert 1011 from binary into decimal we get 11
	 *
	 * EXTRA:
	 * 			The short hand for this is:
	 * 			Start from the right which is 1 and keep doubling the value for each
	 * 			digit going to the left. When you see a 0 just put a 0 in that numbers
	 * 			place and continue doubling.
	 *
	 * 			1011
	 * 			8021 add all four of these digits
	 * 			11   you get eleven
	 */

	return 0;
}
