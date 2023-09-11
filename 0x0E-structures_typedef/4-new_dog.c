#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - init dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner name
 *
 * Return: dog init
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dodo;
	int x, lx = 0, ly = 0;
	char *n, *o;

	for (x = 0; name[x] != '\0'; x++)
		lx++;

	for (x = 0; owner[x] != '\0'; x++)
		ly++;
	lx++, ly++;

	n = malloc((lx) * sizeof(n));
	if (n == NULL)
		return (NULL);

	o = malloc((ly) * sizeof(n));
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}

	dodo = malloc(sizeof(dog_t));
	if (dodo == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}

	for (x = 0; x < lx; x++)
		n[x] = name[x];
	for (x = 0; x < ly; x++)
		o[x] = owner[x];

	dodo->name = n;
	dodo->age = age;
	dodo->owner = o;

	return (dodo);
}
