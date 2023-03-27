#include "main.h"
/**
 * rev_string - reverse strings
 * @s: checker string
 * Return: void
*/
void rev_string(char *s)
{
	int c = 0;
	int l = 0;
	char t;

	while (s[c++])
	{
		l++;
	}
	for (c = l - 1; c >= l / 2; c--)
	{
		t = s[c];
		s[c] = s[l - c - 1];
		s[l - c - 1] = t;
	}
}
