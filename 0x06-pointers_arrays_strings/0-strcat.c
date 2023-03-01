#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	int lenDest = strlen(dest);
	int lenSrc = strlen(src);
	int len = lenDest + lenSrc;
	char *buffer = (char *) malloc(len + 1);

	strcpy(buffer, dest);
	strcat(buffer, src);
	return (buffer);
}
