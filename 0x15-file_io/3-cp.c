#include "main.h"

void copyFile(char *file1, char *file2);
#define bufferSize 1024
#define permission 0664

/**
 * main - main function
 * @argc: num of args
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyFile(argv[1], argv[2]);

	return (0);
}

/**
 * copyFile - program that copies the content of a file to another file.
 * @file1: name of a file copying from
 * @file2: name of a file copying to
*/

void copyFile(char *file1, char *file2)
{
	int fileFrom, fileTo, clsdFrm, clsdT;
	char buffer[bufferSize];
	ssize_t bytesRead, bytesWritten;

	fileTo = open(file2, O_CREAT | O_WRONLY | O_TRUNC, permission);

	if (fileTo == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		clsdT = close(fileTo);
		if (clsdT == -1)
		{
			dprintf(2, "Error: Can't close fd %d", fileTo);
			exit(100);
		}
		exit(99);
	}

	fileFrom = open(file1, O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		clsdFrm = close(fileFrom);
		if (clsdFrm == -1)
		{
			dprintf(2, "Error: Can't close fd %d", fileFrom);
			exit(100);
		}
		exit(98);
	}

	bytesRead = read(fileFrom, buffer, sizeof(buffer));
	if (bytesRead == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		clsdFrm = close(fileFrom);
		if (clsdFrm == -1)
		{
			dprintf(2, "Error: Can't close fd %d", fileFrom);
			exit(100);
		}
		exit(98);
	}
	bytesWritten = write(fileTo, buffer, bytesRead);
	if (bytesRead != bytesWritten)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		clsdT = close(fileTo);
		if (clsdT == -1)
		{
			dprintf(2, "Error: Can't close fd %d", fileTo);
			exit(100);
		}
		exit(99);
	}
}

