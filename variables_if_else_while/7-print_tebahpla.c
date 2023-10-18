#include<stdio.h>
/**
* main - Entry Point
* Description: print lowercase alphabet in reverse
* Return: Always 0 (Sucess)
*/
int main(void)
{

char c;
for (c = 'z'; c >= 'a'; --c)
{
printf("%c", c);
}
printf("\n");

return (0);
}
