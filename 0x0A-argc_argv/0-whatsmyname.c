#include <stdio.h>

/**
 *main - Entry Point
 *@argc: number of args pased to the command-line
 *@argv: Array of Strings containing args passed to the command-line
 * Description: 'Write a program that prints its name,
 * followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program'
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (argc);
}

