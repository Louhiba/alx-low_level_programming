#include "main.h"
/**
 * _strspn - get lenght of a prefix substring 
 * @s: first string
 * @accept: second string
 * Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	int c = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[n] != '\0'; n++)
			if (s[i] = accept[n])
				c++;
	}
	return (0);
}
		
