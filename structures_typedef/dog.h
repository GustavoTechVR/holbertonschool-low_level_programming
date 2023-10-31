#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return:
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(const dog_t *d);

#endif
