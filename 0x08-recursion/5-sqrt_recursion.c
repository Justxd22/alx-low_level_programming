#include "main.h"

/**
 * _sqrt_recursion - square root of n
 * @n: find square root of n
 * Return: result
 */
int _sqrt_recursion(int n)
{
        if (y < 0)
                return (-1);
        if (y == 0)
                return (1);
        return (n * _pow_recursion(x, y - 1));
}
