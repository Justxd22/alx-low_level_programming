#include "main.h"

/**
 * string_toupper - uppercase a string
 * @string: string to upper
 * Return: result
 */
char *string_toupper(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		if (string[x] >= 'a' && string[x] <= 'z')
		{
			/*
			 * The ASCII value difference between lowercase and
			 * uppercase letters is typically 32
			 */
			string[x] = string[x] - 32;
		}
	}
	return (string);
}
