#include <stdio.h>
#include <stdlib.h>
int isInteger(char *str);

/**
 * main - entry point
 * @argc: number of args passed to the command-line
 * @argv: array of char cointaining args passed to the commandline
 * Description: 'Write a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result
 * of the multiplication can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1'
 * Return: 'multiplication of two numbers,
 * if more or less than 2 args are passed return 1'
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		if (isInteger(argv[1]) == 0 && isInteger(argv[2]) == 0)
		{
			prod = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", prod);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	/*if success*/
	return (0);
}

/**
 * isInteger - helper method
 * @str: input string
 * Description: checks if the input string is an integer
 * Return: 1 if str is not an integer otherwise 0
 */

int isInteger(char *str)
{
	/*check if the first charcter is a sign (+ or -)*/
	if (*str == '+' || *str == '-')
		str++;

	while (*str != '\0')
	{
		/*if the charcater is not between 0 and 9 return 1*/
		if (*str < 48 || *str > 57)
			return (1);
		str++;
	}

	return (0);
}
