#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit
* @str: array str
*
* Return: Always 0 (Success)
*/
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - Entry point
 *
 * @argc: integer
 * @argv: array
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i;
	int s = 0;
	int n;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			n = atoi(argv[i]);
			s += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", s);
	return (0);
}
