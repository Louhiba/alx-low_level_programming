#include "main.h"
/**
 * swap_int - swap numbers
 * @a: first number to be swap
 * @b: second number to be swap
*/
void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
