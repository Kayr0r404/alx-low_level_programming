#include "shell.h"
/**
*_strcat - entry point
*@dest: 'string'
*@src: 'string'
*Description: 'Write a function that concatenates two strings.
*Prototype: char *_strcat(char *dest, char *src)
*This function appends the src string to the dest string,
*overwriting the terminating null byte (\0)
*at the end of dest, and then adds a terminating null byte'
*Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	/*first get length of dest*/
	int lenDest = 0, i;

	while (dest[lenDest] != '\0')
		lenDest++;

	/*from the */
	for (i = 0; src[i] != '\0'; i++)
		dest[lenDest + i] = src[i];
	dest[lenDest + i] = '\0';

	return (dest);
}
/**
 * _strdup - duplicate a constant str
 * @str: string to be duplicated
 * Return: duplicated str
 */

char *_strdup(const char *str)
{
	char *new_str;
	size_t length, i;

	if (!str)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
	{
		/* Determine the length of the string*/
		length++;
	}

	/* Allocate memory for the new string*/
       /*(plus one for the null terminator)*/
	new_str = malloc(length + 1);

	if (new_str != NULL)
	{
		for (i = 0; i < length; i++)
		{
			/* Copy each character from the original str to the new str*/
			new_str[i] = str[i];
		}

		/* Add the null terminator at the end of the new string*/
		new_str[length] = '\0';
	}

	return (new_str);
}

int _strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i = 0;
    while ( i < n)
    {
        if (str1[i] != str2[i])
        {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
        if (str1[i] == '\0')
        {
            return (0);
        }
        i++;
    }
    return (0);
}

/**
 * _strtok - is a custom implementation of the strtok function in C,
 * which is used to tokenize a string based on a set of delimiter characters.
 * The function takes an input string and a set of delimiters as parameters and
 * returns individual tokens (substrings) extracted from the input string.
 * @str: represents the input string to be tokenized.
 * It is a pointer to a character array.
 * @delim: the set of delimiter chars tht used to identify token boundaries.
 * Return: pointr to a null-terminated str containing the nxt tok frm  inpt str
 * If there are no more tokens left in the input string, returns NULL.
*/
char *_strtok(char *str, const char *delim)
{
	static char *inputString;
	char *token = NULL;

	/* If a new string is provided, update the inputString*/
	if (str)
		inputString = str;

	/* Check if there is any input string or if it is already finished*/
	if (!inputString || *inputString == '\0')
		return (NULL);

	/* Skip over leading delimiter characters*/
	for (; *inputString && _strchr(delim, *inputString) != NULL; inputString++)
		

	/* If reached end of the input string after skipping delimiters, return NULL*/
	if (*inputString == '\0')
		return (NULL);

	/* Set the token pointer to the current position in the input string*/
	token = inputString;

	/* Find the next occurrence of any delimiter*/
	for (; *inputString && _strchr(delim, *inputString) == NULL; inputString++)
		;

	/* If a delimiter is found, replace it with a null terminator*/
	if (*inputString)
	{
		*inputString = '\0';
		inputString++;
	}

	return (token);
}
/**
 * _getline - a custom implementation of the getline function.
 * @lineptr: pointer to a pointer that will store the line read from the file.
 * @n: pointer to the size of the buffer.
 * @fd: the file descriptor to read from.
 * Return: the number of characters read from the file, or -1 on failure.
 */
ssize_t _getline(char **lineptr, size_t *n, int fd)
{
	size_t totalBytes = 0, buffSize = 0;
	char *buffer = NULL, c;
	ssize_t  lineLen = 0;

	if (lineptr == NULL || n == NULL || fd < 0)
		return (-1);
	/* Allocate an initial buffer if it does not exist*/
	if (*lineptr == NULL || *n == 0)
	{
		buffSize = 128; /* Set an initial buffer size*/
		buffer = (char *)malloc(buffSize);
		if (buffer == NULL)
			return (-1); /* Memory allocation failed*/
		*lineptr = buffer;
		*n = buffSize;
	}
	/* Read characters from the file descriptor until newline or EOF*/
	for (; read(fd, &c, 1) == 1; totalBytes++)
	{
		if (totalBytes >= buffSize - 1)
		{
			/* Increase buffer size if it's about to be full*/
			buffSize *= 2, buffer = (char *)realloc(*lineptr, buffSize);
			if (buffer == NULL)
				return (-1); /* Memory reallocation failed*/
		    *lineptr = buffer, *n = buffSize;
		}
		if (c == '\n')
		{
			(*lineptr)[totalBytes] = '\0'; /* Null-terminate the line*/
			lineLen = totalBytes + 1;
			return (lineLen); /* Return the number of characters read*/
		}
		(*lineptr)[totalBytes] = c;
	}
	/* If no characters were read and we reach the end of the file*/
	if (totalBytes == 0)
		return (-1);
	(*lineptr)[totalBytes] = '\0', lineLen = totalBytes + 1;
	return (lineLen); /* Return the number of characters read*/
}