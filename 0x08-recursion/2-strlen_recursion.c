#include "main.h"

/**
 * _strlen_recursion - str length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len++)
	}

	return (0);
}
