#include "dog.h"
#include <stddef.h>

/**
 * init_dog - int
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: dueño
 * Return: 0
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
