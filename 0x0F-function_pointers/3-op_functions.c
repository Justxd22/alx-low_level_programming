#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - two ints division reminder
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
