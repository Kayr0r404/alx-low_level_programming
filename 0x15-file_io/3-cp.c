#include "main.h"

int copyFile(char *file1, char *file2);
#define bufferSize 1024
#define permission 0664

/**
 * main - program that copies the content of a file to another file.
 * @argc: num of args
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int status;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	status = copyFile(argv[1], argv[2]);
	return (status);
}

/**
 * copyFile - program that copies the content of a file to another file.
 * @file1: name of a file copying from
 * @file2: mae of a file copying to
 * Return: 0 if success
*/

int copyFile(char *file1, char *file2)
{
	int fileFrom, fileTo;
	char buffer[bufferSize];
	ssize_t nRead;

	/* read the file*/
	fileFrom = open(file1, O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		close(fileFrom);
		exit(98);
	}

	fileTo = open(file2, O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (fileTo == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		close(fileTo);
		exit(99);
	}

	nRead = read(fileFrom, buffer, bufferSize);
	if (nRead == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file2);
		close(fileFrom);
		exit(98);
	}

	if (write(fileTo, buffer, nRead) != nRead)
	{
		int clsFileFrom = close(fileFrom);
		int clsFileTo = close(fileTo);

		if (clsFileFrom < 0)
			dprintf(2, "Error: Can't close fd %d\n", fileFrom);
		if (clsFileTo < 0)
			dprintf(2, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}

	return (0);
}


