#include "main.h"
#include <stdio.h>
/**
* puts_half - Prints half of a string
* @str: String to be printed
* Return: void
*/

void puts_half(char *str)

{
	int i, h;

	i = h = 0;

	while (*(str + i) != 0)
{
	i++;
}
if (i % 2 == 0)
	i /= 2;
else
{
	h = (i - 1) / 2;
	i -= h;
}
while (*(str + i) != 0)
{
	putchar(*(str + i));
	i++;
}
	putchar('\n');
}
