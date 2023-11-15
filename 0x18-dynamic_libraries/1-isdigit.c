#include "main.h"


/**
 * _isdigit - check if input digit
 * @c: character
 * Return: 1/0
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
