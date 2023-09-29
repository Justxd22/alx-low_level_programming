#include "main.h"

/**
 * get_endianness - find out system endianness
 * Return: 0/1
 */
int get_endianness(void)
{
	unsigned int x = 1;

	if (*(char *)&x == 1)
		return (1);
	else
		return (0);
}
