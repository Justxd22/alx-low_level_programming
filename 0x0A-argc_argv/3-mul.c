#include <stdio.h>
#include <stdlib.h>

/**
 * main - A FUNCTION
 * @argc: int of no of passed vars
 * @argv: char array of passed vars
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc < 3)
	{
		printf("Error");
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", x);
	}
	return (0);
}
