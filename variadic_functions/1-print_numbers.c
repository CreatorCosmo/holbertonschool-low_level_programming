#include "variadic_functions.h"

/**
 * print_numbers - function that
 * prints numbers, followed by
 * a new line.
 *
 * @separator: is the string to be
 * printed between numbers
 * @n: unsigned int passes as arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator
			!= NULL
			&& i
			!= n - 1)
		{
			printf("%d%s",
			va_arg(args, int),
			separator);
		}
		else
		{
			printf(
			"%d",
			va_arg
			(args,
			int));
		}
	}

	va_end(args);
	printf("\n");
}
