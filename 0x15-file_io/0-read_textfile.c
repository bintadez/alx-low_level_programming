#include "main.h"
#include <stdlib.h>
/**
* read_textfile- reads a text file and
* prints it to standard output.
* @filename: text file to read
* @letters: is the number of letters to read
* Return: number of letters it could read and print
* or 0 if the function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t n;
	ssize_t w;
	ssize_t r;

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(n, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(n);
	return (w);
}

