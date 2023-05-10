#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
*/
int main(int argc, char *argv[])
{
	int f1, f2, i,j;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c = malloc(sizeof(char) * 1204);
	if (c == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	f1 = open(argv[1], O_RDONLY);
	i = read(f1, c, 1024);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do
	{
		if (f1 == -1 || f2 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(c);
			exit(98);
		}
		j = write(f2, c, 1024);
		if (i == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			free(c);
			exit(99);
		}
		i = read(f1, c, 1024);
		f2 = open(argv[2], O_WRONLY | O_APPEND);
	}while (i > 0);
	free(c);
	if (f1 != -1)
	{
		close(f1);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (f2 != -1)
	{
		close(f2);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
