#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 * Prototype: void print_dog(struct dog *d);
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	void *nulld = NULL;

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		printf("Name: %p\n", nulld);
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %p\n", nulld);
	else
		printf("Owner: %s\n", d->owner);
}
