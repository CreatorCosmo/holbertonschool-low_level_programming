#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 0 if the strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
