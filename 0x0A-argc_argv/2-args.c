#include <stdio.h>

/**
 * main - A FUNCTION
 * @argc: int of no of passed vars
 * @argv: char array of passed vars
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s", argv[x]);
		printf("\n");
	}
	return (0);
}
