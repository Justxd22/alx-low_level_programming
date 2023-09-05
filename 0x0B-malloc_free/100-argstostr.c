#include "main.h"
#include <stdlib.h>

/**
 * argstostr - args to string
 * @ac: int len args
 * @av: array of args
 * Return: NULL/POINTER
 */
char *argstostr(int ac, char **av)
{
	char *ss;
	int x, y, ll = 0, bb = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			ll++;
	}
	ll = ll;
	ss = malloc(ll * sizeof(ss));
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			ss[bb] = av[x][y];
			bb++;
		}
		ss[bb] = '\n';
		bb++;
	}
	ss[bb] = '\0';
	return (ss);
}
