#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
		i++;
	s = malloc (sizeof(char) * (i + 1));
	if (s == NULL)
		return(NULL);

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
