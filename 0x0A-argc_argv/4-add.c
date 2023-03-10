#include <stdlib.h>
#include <stdio.h>
int isInteger(char *str);

/**
 * main - entry point
 * @argc: Numbers of args passed to the command-line
 * @argv: Array of char cointaing args passed to the command-line
 * Decription: 'Write a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition
 * of all the numbers can be stored in an int'
 * Return: 0 if success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isInteger(argv[i]) == 0)
			sum += atoi(argv[i]);
		else if (isInteger(argv[i]) != 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
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
	/*check if the first charcter is a sign (+)*/
	if (*str == '+')
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

