#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10;

/* Displaying output */

printf("Last digit of %d is: %d", n, last_digit);

/* if statements */


if (n > 5)
{
printf(" and is greater than 5");
}


if (n == 0)
{
printf(" and is 0");
}


if (n < 6)
{
printf(" and is less than 6 and not 0");
}
	return (0);
}
