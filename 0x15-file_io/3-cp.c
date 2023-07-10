#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * main - main
 * @argc: j
 * @argv: j
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *file_from, *file_to, buffer[1024];
	int fd_from, fd_to, bytes_read;

	if (argc != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
		write(fd_to, buffer, bytes_read);
	close(fd_from);
	close(fd_to);
	return (0);
}
