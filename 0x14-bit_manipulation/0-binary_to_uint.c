#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	int n = 0;

	if (b == NULL)
		return (0);
	while (b[n])
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		c = 2 * c + (b[n] - '0');
		n++;
	}
	return (c);
}
