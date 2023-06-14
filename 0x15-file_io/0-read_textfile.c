#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t i;
	ssize_t w;
	ssize_t n;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	n = read(i, ch, letters);
	w = write(STDOUT_FILENO, ch, n);

	free(ch);
	close(i);
	return (w);
}

