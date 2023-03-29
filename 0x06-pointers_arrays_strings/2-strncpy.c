#include "main.h"
#include <string.h>
/**
 * _strncpy - copy strings
 * @dest: first sting to be copy
 * @src: seconde string to be copy
 * @n: number of character to be copy
 * Return: pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = strncpy(dest, src, n);

	return (ptr);
}
