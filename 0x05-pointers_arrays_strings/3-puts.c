#include "main.h"
/**
 * _puts - put strings
 * @str: string to be puts
 * Return: strings
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
