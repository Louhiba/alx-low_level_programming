#include "main.h"
/**
 * print_sign - checkes numbers greather than 0
 * @n: number to check
 * Return: 0 0r 1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
	       _putchar(45);
		return (-1);
	}
}
