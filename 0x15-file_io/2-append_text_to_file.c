#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * Prototype: int append_text_to_file(const char *filename, char *text_content)
 * @filename: is the name of the file and
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t elementsWritten;

	if (!filename)
		return (-1);

	file = fopen(filename, "a");
	if (!file)
	{
		fclose(file);
		return (-1);
	}
	if (!text_content)
		return (1);

	elementsWritten = fwrite(text_content, 1, strlen(text_content), file);
	if (elementsWritten != strlen(text_content))
	{
		fclose(file);
		return (-1);
	}

	fclose(file);

	return (1);
}
