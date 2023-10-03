#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>


/**
 * closeffs - close passed files
 * @f1: file1
 * @f2: file2
 * Return: 0
 */
int closeffs(int f1, int f2)
{
	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);

	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}


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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);

	ff = open(av[1], O_RDONLY);
	if (ff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	ft = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);


	while ((bb = read(ff, buf, 1024)) > 0)
	{
		if (bb == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
closeffs(ff, ft), exit(98);
		bbw = write(ft, buf, bb);
		if (bbw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
closeffs(ff, ft), exit(99);
	}

	closeffs(ff, ft);
	return (0);
}



