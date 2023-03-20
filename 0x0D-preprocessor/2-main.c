#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 * @argc: number of arguments
 * @argv: array cotaining arguments
 * Description: function that print the name of the file
 * return: 0 Always a success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		argv[0] = "2-main.c";
		printf("%s\n", argv[0]);
	}
	else
		exit(98);
	return (0);
}
