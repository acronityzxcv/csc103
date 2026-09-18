#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
	int n;
	cout << (n = 4) << endl; 	/* 4 */
	cout << (n == 4) << endl; 	/* true */
	cout << (n > 3) << endl; 	/* true */
	cout << (n < 4) << endl; 	/* false */
	cout << (n = 0) << endl; 	/* 0 */
	cout << (n == 0) << endl;   /* true */
	cout << (n > 0) << endl; 	/* false */
	cout << (n && 4) << endl; 	/* false */
	cout << (n || 4) << endl; 	/* true */
	cout << (!n) << endl; 		/* false */
    return 0;
}
/* My predictions were wrong as 1 and 0 is true and false. As for the last, it would be true as n would be 0 meaning false, printing 1*/
// vim:foldlevel=2
