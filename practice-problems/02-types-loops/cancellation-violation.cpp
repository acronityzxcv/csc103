#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: try to find an example violating the "cancellation law".
	 * That is, declare three doubles, d,e,f, and give them values such
	 * that d != e, and yet the sum of d+f is equal to e+f.
	 * Takeaway: prefer integers if they are an option! */
	/* NOTE: if you need a hint, remember that floating point numbers
	 * are stored in something like scientific notation -- there is a
	 * fixed amount of space to write the exponent, and there is also
	 * a fixed amount of space for the coefficient... */
	float d = 2.0f;
	float e = 3.0f;
	float f = 100000000000000000.0f;
		if ((d + f) == (e + f)){
	cout << "cancellation law violation\n";
		}
	return 0;
}
/* found out that to have floats, you need to have f at the end, otherwise it is a double*/
// vim:foldlevel=2
