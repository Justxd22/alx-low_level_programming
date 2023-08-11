#include <stdio.h>

/**
 * main - Entry point
 * Function to - print alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

        int i = 0;
	for (i; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar("\n");
	return (0);
}
