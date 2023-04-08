#include "main.h"
/**
 * _strspn - get lenght of a prefix substring
 * @s: first string
 * @accept: second string
 * Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int n;
	unsigned int c = 0;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				c++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
