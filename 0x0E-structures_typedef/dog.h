#ifndef DOG_H
#define DOG_H

/**
 * struct dog - 'new type struct dog with the following elements'
 * @name: memeber of  type = char *
 * @age: memeber of type = float
 * @owner: memeber of type = char *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*********************************************
 *		Prototypes
 *********************************************/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
