#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to make
 * @text_content: text to write
 * Return: 1/-1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
	n = write(f, text_content, strlen(text_content));
	if (n == -1)
	{
		close(f);
		return (-1);
	}
	}

	close(f);
	return (1);
}
