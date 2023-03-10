#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments passed to the commandline
 * @argv: array of char containg args passed to commandlie
 * Description: 'Write a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line'
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
