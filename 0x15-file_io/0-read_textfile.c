#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes and 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t rf;
	ssize_t wf;
	char *c;

	file = fopen(filename, O_RDONLY);
	if (file == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	rf = read(file, c, letters);

	free(c);
	close(file);
	_putchar(c);
	return (1);
}
