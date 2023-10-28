#include "main.h"
#include <stdio.h>
/**
 *print_number - Prints an integer
 *@n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int leading_zeros = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor >= 1)
	{
		int digit = (n / divisor) % 10;

		if (digit != 0 || !leading_zeros)
		{
			putchar(digit + '0');
			leading_zeros = 0;
		}
		divisor /= 10;
	}
}
