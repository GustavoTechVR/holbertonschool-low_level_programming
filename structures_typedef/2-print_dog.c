#include "dog.h"
#include <stdio.h>

/**
 * print_dog - struc
 * @d: pointer
 * Description: struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
