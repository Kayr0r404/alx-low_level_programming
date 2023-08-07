#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 * @filename: name of the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t bytesWritten, bytesRead;
	FILE *file;
	char *buffer;

	if (!filename)
		return (0);

	file = fopen(filename, "r");
	if (!file)
		return (0);
	/* Allocate space for the buffer*/
	buffer = (char *)malloc(letters + 1);
	if (!buffer)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	/*ssize_t bytesWritten*/
	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);

	return (bytesWritten);
}

