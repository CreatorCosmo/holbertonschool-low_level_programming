#include "main.h"
/**
* _strncat - Concatenates two strings
* @dest: First string to be added
* @src: Second string to be added
* @n: Number of bites to use from src
* Return: Displayed string
*/

char *_strncat(char *dest, char *src, int n)
{

char *temp = dest;

for (; *temp != '\0'; temp++)
	;
for (; *src != '\0'; src++)
{
	if (n == 0)
	break;
	*temp = *src;
	temp++;
	n--;
}
return (dest);
}
