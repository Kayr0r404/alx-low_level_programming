#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * Prototype: void free_dog(dog_t *d);
 * @d: dog struct
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

