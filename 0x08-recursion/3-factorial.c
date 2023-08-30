#include "main.h"

/**
 * factorial - gets the factorial of a num
 * @n: int to factorize
 * Return: factorial
 */
int factorial(int n)
{
	if (n != 0)
	{
		return (n * factorial(n - 1));
	}

	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
