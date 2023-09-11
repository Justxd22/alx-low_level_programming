#ifndef _DOGO_
#define _DOGO_

/**
 * struct dog - dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: doogo info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
