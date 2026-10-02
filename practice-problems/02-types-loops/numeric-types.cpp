#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: investigate the following questions (by writing a bit
	 * of code here and then compiling and running it):
	 * 1. What happens if you assign a floating point value to an
	 *    integer variable?
	 * 2. What about assigning an integer to floating point?  Can
	 *    you think of any way it could go wrong?  (Here, "wrong"
	 *    means "surprising" or unintuitive.)  Hint: read the
	 *    IEEE format and you'll see that you might have issues
	 *    with large integers.
	 * 3. What type of result do you get when adding or multiplying
	 *    floating point values with integers? */

	int y = 10.9;
	double x = 10;
	double a = 10.8;
	int b = 11;
	cout << y << "\n";
	cout << x << "\n";
	cout << a + b << "\n";
	return 0;
}
/* 1. It looses the decimal value
 * 2. Float can handle less data meaning higher numbers will fail
 * 3. Alway becomes a floating point */
// vim:foldlevel=2
