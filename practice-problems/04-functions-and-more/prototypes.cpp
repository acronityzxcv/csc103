/* Function *prototypes* might seem unnecessary -- after all, as long as you
 * place the function earlier in your file than the places you use it, it'll
 * compile just fine.
 * TODO: come up with a situation where at least one function prototype is
 * *strictly necessary*.  Write functions which demonstrate your idea and
 * make sure what you wrote actually compiles (and will not compile without
 * any function prototypes).
 * BTW, if you need a reminder about prototypes, read here:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/lingo.html#function-prototype
 * or here:
 * http://www.charlesli.org/pic10a/lectures/lecture8/index.html
 * */

/* your answer goes here... */
#include <iostream>
using std::cout;

bool isEven(int n);

bool isOdd(int n) {
	    if (n == 0) return false;
		    return isEven(n - 1); 
}

bool isEven(int n) {
	    if (n == 0) return true;
		    return isOdd(n - 1);
}

int main() {
	    if (isEven(4)) {
			        cout << "4 is even\n";
					    }
		    return 0;
}

// vim:foldlevel=2
