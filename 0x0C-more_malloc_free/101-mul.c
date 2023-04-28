#include "main.h"
#include <stdlib.h>
/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > '0' || str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 * main - multiplies two positive numbers
 * @argc: number
 * @argv: array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *n1, *n2, str[5] = "Error";
	int *r, l1, l2, l, c = 0, d1, d2, n, i = 0;

	n1 = argv[1], n2 = argv[2];
	if (argc != 3 || !is_digit(n1) || !is_digit(n2))
	{
		_putchar(str[5]);
		_putchar('\n');
		return (98);
	}
	l1 = _strlen(n1);
	l2 = _strlen(n2);
	l = l1 + l2 + 1;
	r = malloc(sizeof(int) * l);
	for (n = 0; n <= l1 + l2; n++)
		r[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = n1[l1] - '0';
		for (l2 = _strlen(n2) - 1; l2 >= 0; l2--)
		{
			d2 = n2[l2] - '0';
			c += r[l1 + l2 + 1] + (d1 * d2);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[l1 + l2 + 1] += c;
	}
	for (n = 0; n < l - 1; n++)
	{
		if (r[n])
			i = 1;
		_putchar(r[n] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
