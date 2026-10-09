#include <iostream>
using std::cout;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
	int i=5, j=6, k=7, n=3;
	cout << i + j * k - k % n << "\n"; /*Assuming pemdas 5 + 6 * 7 - 7 % 3, would be 6 * 7 = 42, followed by the remainder operation 7 % 3 = 1 */
										 /* Now it is 5 + 42 - 1 = 46 */
	cout << i / n << "\n"; 			   /* Since both are int, they would only give integers, disregarding any decimal; 5/3 = 1.66... giving 1 */
	return 0;
}

// vim:foldlevel=2
