#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n, i, r;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	r = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (n >= c[i])
			{
				r++;
				n -= c[i];
			}
		}
	}
	printf("%d\n", r);
	return (0);
}

