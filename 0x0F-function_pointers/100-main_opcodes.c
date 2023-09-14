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
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
