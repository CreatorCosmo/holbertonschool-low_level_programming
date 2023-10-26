#include "main.h"
#include <stdio.h>
/**
* puts2 - Prints every other character of a string
* @str: The string to be trated
* Return: void
*/

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
	j++;

	for (i = 0; i < j; i += 2)
	
putchar(str[i]);

putchar('\n');
}
