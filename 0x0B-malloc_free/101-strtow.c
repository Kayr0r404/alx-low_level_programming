#include <stdlib.h>
#include <string.h>
#define spaceDelim 32
int countWords(char *str);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings, or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, k, l;

	int counter = countWords(str);
	char **words = malloc((counter + 1) * sizeof(char *));

	if (str == NULL || *str == '\0')
		return (NULL);

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < counter; j++)
	{
		while (str[i] == spaceDelim)
			i++;

		l = i;
		while (str[l] && str[l] != spaceDelim)
			l++;

		words[j] = malloc((l - i + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[j], &str[i], l - i);
		words[j][l - i] = '\0';
		i = l;
	}
	words[j] = NULL;
	return (words);
}


/**
 * countWords - Counts the number of words in a string.
 * @str: input str.
 * Return: The number of words in the string.
 */
int countWords(char *str)
{
	int counter = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != spaceDelim)
		{
			counter++;
			while (str[i] != spaceDelim)
				i++;
		}
	}
	return (counter);
}
