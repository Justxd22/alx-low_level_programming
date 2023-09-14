#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: no of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*opf)(int, int);

	if (argc <= 3)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	opf = get_op_func(argv[2]);

	if (opf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = opf(x, y);

	printf("%d\n", x);

	return (0);
}
