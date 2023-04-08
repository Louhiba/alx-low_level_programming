#include "main.h"
#include <string.h>
/**
 * _strncat - append some character of string to another
 * @dest: first string to be append
 * @src: seconde string
 * @n: number of character
 * Return: pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);
}
