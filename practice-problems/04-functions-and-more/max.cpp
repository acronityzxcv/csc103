/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;

/* your answer goes here... */
int largest(int x, int y, int z) {
    int max = x;
    if (y > max) {
     max = y;
 }
    if (z > max) {
    max = z;
    }
    return max;
}
	
int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	// TODO: call your function, make sure it works...
	return 0;
}

// vim:foldlevel=2
