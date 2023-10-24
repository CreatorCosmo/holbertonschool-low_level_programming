#include "main.h"

/**
* swap_int - Function that swaps the valuesof two integers
*	with pointers
* @a: first int to be considered
* @b: second int to be considered
*/
void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;

}
