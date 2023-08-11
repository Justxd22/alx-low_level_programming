#include <stdio.h>

/**
 * main - Entry point
 * Function to - print alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	for (i = 0; i < 26; i++)
	{
		if ((i == 16) | (i == 4))
		{
			continue;
		}
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
