#include "main.h"
#include <stdio.h>

/**
* print_rev - Print a string in reverse
* @s: String to be displayed
* Return: Void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	for (i -= 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
