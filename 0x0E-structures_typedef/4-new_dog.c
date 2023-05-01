#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
	 /*Allocate memory for the new dog*/
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);  /*Return NULL if memory allocation fails*/
	}

	/*Allocate memory for the name and copy the string*/
	newDog->name = malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);  /*Return NULL if memory allocation fails*/ 
	}
	strcpy(newDog->name, name);

	/*Allocate memory for the owner and copy the string*/
	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
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

