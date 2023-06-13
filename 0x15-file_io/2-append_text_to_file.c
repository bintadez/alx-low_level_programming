#include "main.h"
/**
* append_text_to_file - Appends text to the end of a file
* filename
* @filename:is a pointer to the file.
* @text_content: Text to append at the end of the file.
*Return: -1 for failure and 1 for success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int d, wr, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	wr = write(d, text_content, count);

	if (d == -1 || wr == -1)
		return (-1);

	close(d);
	return (1);
}

