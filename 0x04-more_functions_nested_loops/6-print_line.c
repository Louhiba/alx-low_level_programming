#include "main.h"
/**
 * print_line - print '-'
 * @n: integral to be checker
*/
void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
	int i;

	for (i = 0; i <= n ; i++)
	{
	_putchar('-');
	}
	_putchar('\n');
	}
}
