#include "main.h"
#include <string.h>

/**
 * _atoi - converts str to int
 * @s: str
 * Idea from holbertonschool Example
 * Return: returns result
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int res = 0;
	int sign = 0;
	int digit = 0;
	int len = strlen(s);

	while (i < len && res == 0)
	{
		if (s[i] == '-')
			++sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			n = n * 10 + digit;
			res = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			res = 0;
		}
		i++;
	}

	if (res == 0)
		return (0);

	return (n);
}
