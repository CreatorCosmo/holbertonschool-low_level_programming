#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: The destination string
* @src: Source string
*
* Return: A pointer to the resulting string
*/

char *_strcat(char *dest, char *src)

{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
	;
	for (; *src != '\0'; src++)
	{
	*temp = *src;
	temp++;
	}
	*temp = *src;
	return (dest);
}
