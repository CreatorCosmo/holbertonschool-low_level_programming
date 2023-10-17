#include <stdio.h>
/**
* main - Entry Point
* Description: 'printing alphabet in lowercase, then uppercase"
* Return: Always 0 (Sucess)
*/

int main(void)
{
char e, i;


for (e = 'a'; e <= 'z'; e++)
putchar(e);

for (i = 'A'; i <= 'Z'; i++)
putchar(i);

putchar('\n');

return (0);
}
