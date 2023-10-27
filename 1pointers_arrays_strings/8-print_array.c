#include "main.h"
#include <stdio.h>
/**
* print_array - Prints number of elements of an array of integers
* @a: The array to print
* @n: Number of items from the array
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
	printf("%d", *(a + i));
	if (i != n - 1)
	printf(", ");
	i++;
}
	putchar('\n');
}
