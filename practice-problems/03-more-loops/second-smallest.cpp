/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
#include <climits>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */
int a; /*current*/
int b = INT_MAX; /*smallest*/
int c = INT_MAX; /*second smallet*/
while (cin >> a){
	if (a < b){
		c = b;
	b = a;
	}
	else if (a < c) {
c = a;
			}
}
cout << c << " was second smallest";
	return 0;
}

// vim:foldlevel=2
