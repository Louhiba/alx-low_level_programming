#include "main.h"
/**
 * _islower - print 1 if a lowercase
 * @c: chracter to be checked
 * Return: 1 or 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
