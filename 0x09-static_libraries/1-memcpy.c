#include "main.h"
/**
 * _memcpy - copy string in another string
 * @dest: string to be copy in it
 * @src: copy string
 * @n: number of character
 * Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
