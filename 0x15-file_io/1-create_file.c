#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - a function that creates a file.
 * Prototype: int create_file(const char *filename, char *text_content);
 * @filename: is the name of the file to create and
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created,file can not be written, write“fails”,etc)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t elementsWritten;

	if (!filename)
		return (-1);

	file = fopen(filename, "w+");
	if (!file)
	{
		fclose(file);
		return (-1);
	}
	if (!text_content)
	{
		text_content = malloc(sizeof(char));
		if (!text_content)
			return (-1);
		*text_content = '\0';
	}
	elementsWritten = fwrite(text_content, 1, strlen(text_content), file);

	if (elementsWritten != strlen(elementsWritten))
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
