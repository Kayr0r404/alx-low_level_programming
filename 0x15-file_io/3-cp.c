#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function
 * @argc: num of args
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	FILE *fp_from, *fp_to;
	/* Create a buffer to read from the file*/
	char buffer[1024];

	/* Check the number of arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fil_frm fil_t\n");
		exit(97);
	}

	/*Open the file to read from*/
	fp_from = fopen(argv[1], "r");
	if (fp_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Open the file to write to*/
	fp_to = fopen(argv[2], "w");
	if (fp_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	/*Set the permissions of the file to be created*/
	chmod(argv[2], 0666);
	/* Read from the file and write to the other file*/
	while (fgets(buffer, 1024, fp_from) != NULL)
	{
		fputs(buffer, fp_to);
	}
	/* Close the files*/
	fclose(fp_from);
	fclose(fp_to);
	/* Return success*/
	return (0);
}

