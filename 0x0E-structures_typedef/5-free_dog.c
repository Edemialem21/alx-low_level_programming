#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dynamically allocated memory for dog type
 * @d: the dog type structure to be freed
 * Return: success 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
