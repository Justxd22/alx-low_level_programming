#include "main.h"

/**
 * main - A FUNCTION
 * @argc: int of no of passed vars
 * @argv: char array of passed vars
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *ss = argv[0];

	while (*ss != '\0')
	{
		_putchar(*ss);
		ss++;
	}
        return (0);
}
