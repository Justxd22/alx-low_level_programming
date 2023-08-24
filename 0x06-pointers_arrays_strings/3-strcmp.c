#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	while (s1[j] == s2[j] && s2[j] != '\0' && s1[j] != '\0')
	{
		j++;
	}

	return (s1[j] - s2[j]);
}
