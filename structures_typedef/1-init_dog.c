#include <stdio.h>
#include "dog.h"
/**
 * init_dog - dog
 * @d: addresse
 * @name: nom
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
