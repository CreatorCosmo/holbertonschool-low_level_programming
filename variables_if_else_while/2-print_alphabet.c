#include <stdio.h>
/**
* main - Entry Point
* Description: 'print alphabet in lowercase followed by a new line'
* Return: Always 0 (Sucess)
*/
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);

}

putchar('\n');
return (0);
}
