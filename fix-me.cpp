/* TODO: fix all compiler errors in the following program (you can of course
 * use the compiler to check your work...) */
#include <iostream>
using std::cin;
using std::cout;
#include <limits.h>

int main()
{
	int m = INT_MIN;
	int x;

	while (cin >> x) { /* Defaulting to -247... The while statment immediately stopped before it started. */
		cin >> x; /* forgot ;*/
		/* check if read into green was successful: */
		if (!cin.good()) break; /* if read failed, exit the loop */
		if (x > m) m = x;
	}
	cout << "largest value was " << m << '\n'; /* need ' ' for strings */
	return 0;
}

// vim:foldlevel=2
