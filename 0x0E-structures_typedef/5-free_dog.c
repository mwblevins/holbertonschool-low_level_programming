#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the doges
 * @d: struct dog
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
