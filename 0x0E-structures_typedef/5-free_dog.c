#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * free_dog - free dog struct
 * @d: dog pointer
 * no Return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
