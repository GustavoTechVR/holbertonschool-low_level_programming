#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - struct
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: dueno
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;
	
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
