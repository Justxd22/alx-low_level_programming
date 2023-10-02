#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stand. out.
 * @filename: file to read
 * @letters: no. of x letters to read
 * Return: no of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buf;
	ssize_t x, n;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	buf = malloc(sizeof(buf) * letters);
	if (buf == NULL || f == -1)
	{
		if (buf != NULL)
			free(buf);
		if (f != -1)
			close(f);
		return (0);
	}

	x = read(f, buf, letters);
	if (x == -1)
	{
		free(buf);
		close(f);
		return (0);
	}

	n = write(STDOUT_FILENO, buf, x);
	if (n != x || n == -1)
	{
		free(buf);
		close(f);
		return (0);
	}

	free(buf);
	close(f);
	return (x);
}
