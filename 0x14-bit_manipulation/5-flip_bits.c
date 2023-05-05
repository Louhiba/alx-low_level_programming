#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int j = 0;
	unsigned long int flip;
	unsigned long int t = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flip = t >> i;
		if (flip & 1)
			j++;
	}
	return (j);
}
