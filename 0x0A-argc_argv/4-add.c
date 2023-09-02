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
	int x, y, ss = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		ss += atoi(argv[x]);
	}
	printf("%d\n", ss);
	return (0);
}
