#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_fd(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The file buffer is storing characters for.
 *Return: A pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_fd - Closes file descriptors.
 * @fd: The file descriptor to closed.
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments passed to the main.
 * @argv: An array of pointers to the list of arguments.
 *Return: 0 on success.
 *
 * exit code 97 If the argument count is incorrect
 * exit code 98 If file  does not exist or cannot be read
 * exit code 99 If file cannot be created or written to
 * exit code 100 If file descriptor  cannot be closed
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	r = read(from_fd, buff, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to_fd, buff, r);
		if (to_fd == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from_fd, buff, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_fd(from_fd);
	close_fd(to_fd);

	return (0);
}
