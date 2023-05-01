#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * Prototype: dog_t *new_dog(char *name, float age, char *owner);
 * @name: The name of the dog
 * @age: age of the dog
 * @owner: ownwer of the dog
 * You have to store a copy of name and owner
 * Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	 /*Allocate memory for the new dog*/
	dog_t *newDog = malloc(sizeof(dog_t));

	if (!newDog)
	{
		return (NULL);  /*Return NULL if memory allocation fails*/
	}

	/*Allocate memory for the name and copy the string*/
	newDog->name = malloc(1 + strlen(name));
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);  /*Return NULL if memory allocation fails*/
	}
	strcpy(newDog->name, name);

	/*Allocate memory for the owner and copy the string*/
	newDog->owner = malloc(strlen(owner) + 1);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);  /* Return NULL if memory allocation fails*/
	}
	strcpy(newDog->owner, owner);

	/* Set the age of the new dog*/
	newDog->age = age;

	return (newDog);
}

