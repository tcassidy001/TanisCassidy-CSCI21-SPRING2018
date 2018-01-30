/**********************************************/
/***** Programming Challenge 1  UNIT TEST *****/
/**********************************************/

#include <cstdint>
#include <string>
using std::string;

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
 * Create a string greeting that is the concatenation of a message and a name.
 * @param name a string containing a user name.
 * @return the string "Nice to meet you, NAME" where NAME contains the 
 *         parameter value
 */
string greet (string name) {
  return string("");
}

/*
 * Create a string message based upon whether or not a user has C++ 
 * programming experience.
 * @param hasExperience a char ('Y'es or 'N'o) representing whether or 
 *        not a user has C++ programming experience
 * @return "Welcome back" when hasExperience is 'Y', else "Get ready to 
 *         have some fun"
 */
string checkExperience (char hasExperience) {
	return string("");
}

/*
 * Determine if one integer is a factor (evenly divisible into) of another 
 * integer.
 * @param numerator an int representing the numerator (the value being test 
 *        against) in the equation.
 * @param denominator an int representing the denominator (the potential factor)
 *        in the equation.
 * @return true if the numerator is evenly divisible by the denominator (making 
 *         the denominator a factor), else return false; also returns false if
 *         denominator is 0.
 */
bool isFactor (int numerator, int denominator) {
  return false;
}

/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters, 
 * dimes, nickels, and pennies that would be given as change.
 * @param initialValue an int representing the amount of change to be broken 
 *        down.
 * @param quarters the number of quarters that come out of the initial value.
 * @param dimes the number of dimes that come out of the initial value, after 
 *        quarters have been taken out.
 * @param nickels the number of nickels that come out of the initial value, 
 *        after quarters and dimes have been taken out.
 * @param pennies the number of pennies that come out of the initial value, 
 *        after quarters, dimes, and nickels have been taken out.
 */
void makeChange (uint32_t initialValue, uint32_t& quarters, uint32_t& dimes, uint32_t& nickels, uint32_t& pennies) {
}

/*
 * Unit test. Do not alter.
 */
TEST_CASE ("function implementations") {

	CHECK(greet("") == "Nice to meet you, ");
	CHECK(greet("Fozzie Bear") == "Nice to meet you, Fozzie Bear");

	CHECK(checkExperience('Y') == "Welcome back");
	CHECK(checkExperience('N') == "Get ready to have some fun");

	CHECK(isFactor(1, 1) == true);
	CHECK(isFactor(1, 0) == false);
	CHECK(isFactor(100, 25) == true);
	CHECK(isFactor(100, 26) == false);

	uint32_t q = 0, n = 0, d = 0, p = 0;
	makeChange(0, q, d, n, p);
	CHECK(q == 0);
	CHECK(d == 0);
	CHECK(n == 0);
	CHECK(p == 0);

	makeChange(41, q, d, n, p);
	CHECK(q == 1);
	CHECK(d == 1);
	CHECK(n == 1);
	CHECK(p == 1);

	makeChange(99, q, d, n, p);
	CHECK(q == 3);
	CHECK(d == 2);
	CHECK(n == 0);
	CHECK(p == 4);	
}
