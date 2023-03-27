#include "main.h"
/**
 * puts_half - put half string
 * @str: checker string
 * Return: void
*/
void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 1)
	{
		i = (c - 1) / 2;
		i++;
	}
	else
	{
		i = c / 2;
	}
	for (; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
