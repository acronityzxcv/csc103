#include <iostream>
using std::cin;
using std::cout;

/* TODO: read two integers n,m and draw (using some for loops) a
 * rectangle of '*' characters that is nxm.  E.g. if n = 3, m = 4
 * then output would be like this: */
// * * * *
// * * * *
// * * * *

int main()
{
int n, m;
/* n is length and m is wide*/
 cin >> n >> m;
	 for (int i = 0; i < n ; i++) {
 for (int h = 0; h < m ; h++){
	 cout << "*";
 }
 cout << "\n";

	 }
	return 0;
}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
