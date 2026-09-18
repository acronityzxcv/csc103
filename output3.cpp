#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
    int x = 10, y = 3;
    double d = 4, e = 2;
    cout << --x << endl; /* Assuming --x works like x++,t would be 9 */
    cout << x-- << endl; /* ^ following same principle, 8 */
    cout << y/x << endl; /* 3/8 gives 0.375, with int giving 0 */
    y = e; 				 /* y takes the value of e:2, giving 2 */
    cout << y/x << endl; /* 2/8 gives 0.25, with int giving 0 */
    cout << x%y << endl; /* 8/2 = 4, with no remainder so 0 */
    cout << (x-d)/y << endl; /* (8 - 4.0)/2 = 2 */
    return 0;
}
/* line 13 should be 9 due to x-- and --x being different from when the action is preformed */
// vim:foldlevel=2
