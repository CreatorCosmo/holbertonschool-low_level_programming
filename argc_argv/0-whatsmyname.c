#include "main.h"
#include <stdio.h>
/**
 *main- function for printing its file name
 *
 *@argc: Times of total arguments in prompt line
 *@argv: Values of specific argc index in the string prompt
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	while (*argv)
	{
	printf("%s\n", *argv);
	argv++;
	}
	return (0);
}
