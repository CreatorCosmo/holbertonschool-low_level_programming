#include "main.h"

/**
* print_alphabet_x10 - Print the alphabet 10 times
* Description: 'print alphabet in lowercase'
* Return: void
*/

void print_alphabet_x10(void)
{

	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);

	_putchar ('\n');
	i++;
	}
}
