#include "main.h"

/**
* print_alphabet_x10 - Print the alphabet 10 times
* Description: 'print alphabet in lowercase'
* Return: void
*/

void print_alphabet_x10(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)

do {
_putchar(c);
++c; }

while (c < 10);

_putchar ('\n');

}
