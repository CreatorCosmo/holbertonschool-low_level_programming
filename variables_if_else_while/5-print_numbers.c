#include <stdio.h>
/**
* main - Entry Point
* Description: print single digits of base 10 from 0
* Return: Always 0 (Sucess)
*/

int main(void)
{
int x;

for (x = 0; x < 10; x++)
{
putchar(x + '0');

}
putchar('\n');

return (0);
}
