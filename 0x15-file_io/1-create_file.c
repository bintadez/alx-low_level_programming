#include "main.h"
/**
* create_file - function that Creates a file
* @filename: A pointer to the file to create.
* @text_content: A pointer to a string to write to the file.
* Return: 1 on succes  - 1 on faillure
*/
int create_file(const char *filename, char *text_content)
{
	int d, wr, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(d, text_content, count);

	if (wr == -1 || d == -1)
		return (-1);

	close(d);
	return (1);
}

