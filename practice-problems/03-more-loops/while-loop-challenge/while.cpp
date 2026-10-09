/* TODO: for each of the following snippets, re-write something
 * which is (a) functionally equivalent and (b) USES ONLY WHILE
 * LOOPS FOR FLOW OF CONTROL.
 * NOTE: b,b1,b2, etc will denote boolean expressions and other
 * upper case letters like X,Y, etc denote arbitrary statements.
 * In contrast with almost all else we've done, this code is not
 * meant to compile or run.  Just something fun to think about.
 * NOTE: this is for educational purposes, and naturally you
 * should not write normal code using only while loops!
 * HINT: at times you may need to introduce a new variable (and
 * if you do all of these without, show me how!). */

/* 1. */

bool run_1 = true;
while (b && run_1) {
    X;
    run_1 = false;
/* 2. */

while (b) {
    Z;
    Y;
/* 3. */

bool first = true;
while (first || b) {
    X;
    first = false;
/* 4. */

if (b) {
	X;
} else {
	Y;
}

/* 5. */

if (b1) {
	X;
} else if (b2) {
	Y;
} else if (b3) {
	Z;
}

// vim:foldlevel=2
