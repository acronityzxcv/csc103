/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two
 * different sums?
 * Bonus question (might be non-obvious): can you do this without any
 * if statements? */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */

	int x; /* number */
	int y = 0; /* sum */
	while(cin >> x){
		if (x % 2 == 0){
	 		y += x;
	} else{
		y -= x;
	}
	}	
		cout << y << "\n";
	return 0;
}
/* correct answer, but I have to enter a letter to get answer*/

/* couldn't figure out bounus if question */
// vim:foldlevel=2
