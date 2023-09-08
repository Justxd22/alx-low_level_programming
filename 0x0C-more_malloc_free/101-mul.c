#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * digi - is digit?
 * @c: check
 * Return: 0/1
 */
int digi(char *c)
{
	int x;

	for (x = 0; c[x]; x++)
		if (c[x] < 48 || c[x] > 57)
			return (0);
	return (1);
}


/**
 * countDigits - count the number of digits in an integer
 * @num: the integer
 * Return: number of digits
 */
int countDigits(int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * strToBigInt - convert a string to a big integer
 * @str: the string
 * Return: the converted integer
 */
unsigned long strToBigInt(const char *str) {
    unsigned long result = 0;
	int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            printf("Error\n");
            exit(98);
        }
    }

    return result;
}


/**
 * main - multiplies two positive numbers
 * @argc: len args
 * @argv: args array
 * Return: NULL/pointer
 */
int main(int argc, char *argv[])
{
	char *a;
	unsigned long n1, n2, r, len, i, y = 0;

	if (argc != 3 || !digi(argv[1]) || !digi(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	n1 = strToBigInt(argv[1]);
	n2 = strToBigInt(argv[2]);

	r = n1 * n2;
	len = countDigits(r);

	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (0);

	if (r == 0)
	{
		a[0] = '0';
		y++;
	}
	else
	{
		for (i = len - 1; i >= 0; i--)
		{
			a[i] = '0' + r % 10;
			r /= 10;
			y++;
		}
	}


	a[y] = '\0';
	printf("%s\n", a);

	free(a);
	return (0);
}
