#include "main.h"
#include <string.h>
/**
 * _strcat - appending strings
 * @src: string to be append
 * @dest: the seconde string to be appende
 * Return: pointer
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = strcat(dest, src);

	return (ptr);
}
