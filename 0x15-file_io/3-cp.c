#include "main.h"

void copyFile(int argc, char *argv[]);
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
	copyFile(argc, argv);

	return (0);
}

/**
 * copyFile - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: Array of pointers containing args
*/

void copyFile(int argc, char *argv[])
{
	int fp_from, fp_to, wc;
	char buffer[bufferSize];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fp_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fp_from), exit(99);
	}
	while ((wc = read(fp_from, buffer, 1024)) > 0)
	{
		if (wc != write(fp_to, buffer, wc))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fp_from), close(fp_to), exit(99);
		}
	}
	if (wc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fp_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from), exit(100);
	if (close(fp_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to), exit(100);
}

