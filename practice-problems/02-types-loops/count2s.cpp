/* TODO: given an integer n, find exponent of the largest power of two that
 * divides n.  Example: if n = r*8 with r odd, then you should output 3
 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
 * number's factorization into primes.)
 * IDEA: keep on dividing n by two until we can't, and keep track of how
 * many times it worked. */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */
	int n;
	int i = 0;
	cin >> n;
	if(n != 0){
		while (n % 2 == 0){
				i++;
					n/=2;
		}
		cout << "divided: " << i << " times\n";
	}
	return 0;
}
/* i should be declared outside of for scope*/
/* make sure it can start when 0 doesn't create infinite loop*/
/* Instead of && with n != 0 and n % 2, I can do if with a while loop instead of a for loop*/
/*forgot to do i = 0 to intialize*/
// vim:foldlevel=2
