#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed
 * @argv: an array of arguments
 * Return: 0
 */i

int main(int argc, char *argv[])
{
	int dfr, dfw, k, x, y;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fil_frm fil_t\n");
		exit(98);
	}
	dfw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(dfr, buff, BUFSIZ)) > 0)
	{
		if (dfw < 0 || write(dfw, buff, k) != k)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(dfr);
			exit(99);
		}
	}
	if (k < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(dfr);
	y = close(dfw);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close df %d\n", dfr);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close df %d\n", dfw);
		exit(100);
	}
	return (0);
}
