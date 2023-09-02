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
	int x, c, r = 0, cc[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	if (c < 0 || !isdigit(*argv[1]))
	{
		printf("0\n");
		return (1);
	}
	for (x = 0; x < 5; x++)
	{
		while (c >= cc[x])
		{
			c -= cc[x];
			r += 1;
		}
	}
	printf("%d\n", r);
	return (0);
}
