#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * main - cp files
 * @ac: args len
 * @av: args array
 * Return: 0
 */
int main(int ac, char *av[])
{
	int ff, ft;
	ssize_t bb, bbw;
	char buf[1024];

	if (ac <= 2)
		dprintf(2, "Usage: cp file_from file_to"), exit(97);

	ff = open(av[1], O_RDONLY);
	if (ff == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	ft = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);


	while ((bb = read(ff, buf, 1024)) > 0)
	{
		bbw = write(ft, buf, bb);
		if (bbw != bb)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (close(ff) == -1)
		dprintf(2, "Error: Can't close fd %d\n", ff), exit(100);

	if (close(ft) == -1)
		dprintf(2, "Error: Can't close fd %d\n", ft), exit(100);

	return (0);
}
