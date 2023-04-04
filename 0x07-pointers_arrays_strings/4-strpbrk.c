#include "main.h"
/**
 * _strpbrk - doen
 * @s: charactder to be checker
 * @accept: second character
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		if (accept[i] == *s)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
