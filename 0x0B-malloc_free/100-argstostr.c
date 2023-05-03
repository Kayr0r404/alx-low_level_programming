#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @ac: number of arguments
 * @av: array of strings
 * Returns NULL if ac == 0 or av == NULL
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Compute total length of arguments*/
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;  /* Add 1 for newline character*/

	/* Allocate memory for concatenated string*/
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy arguments to string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[pos++] = av[i][j];
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}

