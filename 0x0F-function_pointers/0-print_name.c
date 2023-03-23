#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: string passed
 * @f: pointer to a function
 */


void print_name(char *name, void (*f)(char *))
{
	void (*fp)(char *) = f;

	if (name == NULL)
	{
		name = "";
	}

	(*fp)(name);
}
