#include "shell.h"


/**
 * remove_space - removes leading or trailing whitespaces from a given command
 * @str: input string from the user
 *
 * Return: none
 */
void remove_space(char *str)
{
	int len = _strlen(str), i, j;
	int start = 0, end = len - 1;

	while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n')
	{
		start++;
	}

	while (end >= start &&
		   (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))
	{
		end--;
	}

	for (i = 0, j = start; j <= end; i++, j++)
	{
		str[i] = str[j];
	}
	str[i] = '\0';
}
