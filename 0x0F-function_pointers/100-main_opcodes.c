#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: no of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]), i;
	unsigned char *ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num_bytes; i++)
		printf("%02x ", ptr[i]);

	printf("\n");

	return (0);
}
