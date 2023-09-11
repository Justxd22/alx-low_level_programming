#include "dog.h"

/**
 * init_dog - init dog struct
 * @d: pointer to dog init
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner name
 *
 * no Return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
