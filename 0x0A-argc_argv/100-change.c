#include <stdio.h>
#include <stdlib.h>
int isInteger(char *str);
int highestFactor(int n);

/**
 * main - Entry point fun
 *@argc: number of args passed to the command-line
 *@argv: Array of Strings containing args apssed to the command-line
 * Description : 'Write a program that prints the minimum number
 * of coins to make change for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent'
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (isInteger(argv[1]) == 0)
	{
		if (atoi(argv[1]) >= 0)
			printf("%d\n", highestFactor(atoi(argv[1])));
		else
		{
			printf("%d\n", 0);
			return (1);
		}
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

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

/**
 * highestFactor - Helper function
 * @n: input integer
 * Description: find the highest factor of int n
 * Return: highest factor of n
 */

int highestFactor(int n)
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (n / coins[i] != 0)
		{
			return ((n / coins[i]) + highestFactor(n % coins[i]));
		}
	}

	return (0);
}
