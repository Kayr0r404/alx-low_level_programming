#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: struct
 * @name: struct member
 * @age: 2nd memeber
 * @owner: 3rd memeber
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
