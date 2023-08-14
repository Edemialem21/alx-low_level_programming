#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * init_dog - initialize the variable of type struct dog
 * @d: the variable of type dog
 * @name: the pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner
 * Return: void for succes
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

