#include "main.h"

/**
* factorial - Function that calculates
*	the factorial of a number
* @n: Number to calculate the factorial
* Return: interger value
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n <= 1)
	return (1);

	return (n * factorial(n - 1));
}
