/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */
	int x;
	int y = 0;
	while (cin >> x){
		y += x;
	}
	cout << y << "\n";
	return 0;
}
/* if doesn't work, changed to while*/
// vim:foldlevel=2
