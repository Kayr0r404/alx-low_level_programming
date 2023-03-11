#include <stdio.h>

/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *Description: ' Write a program that prints the number
 *of arguments passed into it
 *Your program should print a number, followed by a new line'
 *Return: number of arguments passed on command line
 */

int main(int argc, char *argv[])
{
	unsigned int long i;
	char *arr[1] = {"Karabo"};

	for (i = 0; (sizeof(arr) / sizeof(arr[0])) > i; i++)
	{
		arr[0] = argv[i];
	}
	printf("%d\n", argc - 1);
	return (argc);
}
