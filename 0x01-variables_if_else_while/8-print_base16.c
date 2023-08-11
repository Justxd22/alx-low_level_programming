#include <stdio.h>

/**
 * main - Entry point
 * Function to - print alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdef";

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 7; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}

