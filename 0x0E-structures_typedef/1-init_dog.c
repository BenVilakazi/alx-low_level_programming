#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - creates a new dog type from struct dog
 * @d: new dog structure name
 * @name: dogs name
 * @age: dogs age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}