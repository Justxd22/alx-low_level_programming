#include "main.h"

/**
 * is_prime - check if n is prime
 * @n: int
 * @h: int helper
 * Return: result
 */
int is_prime(int n, int h)
{
	if (h * h > n)
		return (1);
	if (n % h == 0 || n % (h + 2) == 0)
		return (0);

	return (is_prime(n, h + 6));
}


/**
 * is_prime_number - check if n is prime
 * @n: int is prime?
 * Return: result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (0);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	return (is_prime(n, 5));
}
