#include <stdio.h>
/**
* main - Entry Point
* Description: 'printing alphabet in lowercase, then uppercase"
* Return: Always 0 (Sucess)
*/

int main(void)
{
char i;


for (i = 'a'; i <= 'z'; i++)
	printf("%c", i);

for (i = 'A'; i <= 'Z'; i++)
printf("%c", i);

return (0);
}
