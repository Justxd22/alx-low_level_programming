#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A FUNCTION
 * @argc: int of no of passed vars
 * @argv: char array of passed vars
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, ss = 0;

	for (x = 1; x < argc; x++)
	{
		if (!isdigit(*argv[x]))
		{
			printf("Error");
			return (1);
		}
		ss += atoi(argv[x]);
	}
	printf("%d\n", ss);
	return (0);
}
