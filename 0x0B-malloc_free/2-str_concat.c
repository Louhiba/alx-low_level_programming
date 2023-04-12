#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0;
	int r = 0;

	if (s1 == NULL || s2 == NULL)
		return (" ");
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	c = malloc(sizeof(char) * (i + r + 1));
	if (c == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		c[i] = s2[r];
		i++;
		r++;
	}
	c[i] = '\0';
	return (c);
}
