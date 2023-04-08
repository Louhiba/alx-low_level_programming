#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: first sting to be copy
 * @src: seconde string to be copy
 * @n: number of character to be copy
 * Return: pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);

}
