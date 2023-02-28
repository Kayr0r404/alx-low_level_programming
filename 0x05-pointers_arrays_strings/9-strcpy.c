#include "main.h"

/**
*_strcpy - entry point
*@dest: 'string"
*@src: 'string
*Description: 'Prototype: char *_strcpy(char *dest, char *src);
*Write a function that copies the string pointed to by src,
*including the terminating null byte (\0), to the buffer pointed to by dest'
*Return: value the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
