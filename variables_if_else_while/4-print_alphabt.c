#include <stdio.h>
 /**
* main - Entry Point
* Description: 'printing alphabet in lowercase, except letter e nor q"
* Return: Always 0 (Sucess)
*/
 
int main(void)

{
char i;
 
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
putchar(i);
}
putchar('\n');

return (0);
}
