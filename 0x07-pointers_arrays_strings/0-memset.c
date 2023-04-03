#include "main.h"
/**
 * _memset - print character  a number of time
 * @s: character to be checker
 * @b: seconde character to be checker
 * @n: number of time
 * Return: character
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (&s[i]);
}
