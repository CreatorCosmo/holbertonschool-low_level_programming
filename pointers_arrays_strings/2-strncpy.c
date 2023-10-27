#include "main.h"

/**
* _strncpy - Copies a string from source
*	to destination.
* @dest: The destination string
* @src: Source string
* @n: Maximum number of characters to copy
* Return: A pointer to the dest string
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
while (i < n)
{
	dest[i] = src[i];
	i++;
}
return (dest);
}
