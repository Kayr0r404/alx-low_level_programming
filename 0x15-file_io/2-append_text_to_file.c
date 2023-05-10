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
	int file, elementsWritten;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (!text_content)
		return (1);

	elementsWritten = write(file, text_content, strlen(text_content));

	if (elementsWritten == -1)
		return (-1);

	return (1);
}
