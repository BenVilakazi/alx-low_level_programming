#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - the new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: Always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}