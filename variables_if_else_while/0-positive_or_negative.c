#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if statement if n is greater than 0 is positive */
	if (n > 0) {
		printf("%d is positive", n);
	}

	/*if statement if n is equal to 0 is zero */
	if (n == 0) {
		printf("%d is zero", n);
	}
	/* if statement is less than 0 is negative */
	if (n < 0) {
		printf("%d is negative", n);
	}
	return (0);
}
