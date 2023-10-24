#include "main.h"
#include <stdio.h>

/**
* _strlen - Returns the length of a specified string
* @s: Specified string to ge the length value
* Return: Return the length
*/

int _strlen(char *s)

{
	int c = 0;

	for (; *s != '\0'; s++)
	{
	c++;
	}
	return (c);
}
