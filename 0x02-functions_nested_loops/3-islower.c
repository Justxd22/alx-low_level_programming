#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * Function to - print alphabets
 * @c: The character to be checked.
 * Return: 0/1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
