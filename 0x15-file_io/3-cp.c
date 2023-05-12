#include "main.h"
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
	int fileFrom, fileTo;
	char buffer[bufferSize];
	ssize_t nRead;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* read the file*/
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (fileTo == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((nRead = read(fileFrom, buffer, bufferSize)) > 0)
	{
		if (write(fileTo, buffer, nRead) < nRead)
		{
			int clsFileFrom = close(fileFrom);
			int clsFileTo = close(fileTo);

			if (clsFileFrom < 0)
				dprintf(2, "Error: Can't close fd %d\n", fileFrom);
			if (clsFileTo < 0)
				dprintf(2, "Error: Can't close fd %d\n", fileTo);
			exit(100);
		}
	}

	return (0);
}

