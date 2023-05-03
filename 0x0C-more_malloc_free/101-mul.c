#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isNumber(char *str);
void handleError(void);

/**
 * main -  a program that multiplies two positive numbers.
 * @argc: number of args
 * @argv: array of string
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
	int i, j;
	int max_len = strlen(argv[1]) + strlen(argv[2]);
	int *result = calloc(max_len, sizeof(int));
	int start = 0;
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2]))
		handleError();

	for (i = strlen(argv[1]) - 1; i >= 0; i--)
	{
		int remainder = 0;
		int digit1 = num1[i] - '0';

		for (j = strlen(argv[2]) - 1; j >= 0; j--)
		{
			int digit2 = num2[j] - '0';
			int prod = digit1 * digit2 + remainder + result[i + j + 1];

			remainder = prod / 10;
			result[i + j + 1] = prod % 10;
		}

		result[i + j + 1] = remainder;
	}

	while (result[start] == 0 && start < max_len - 1)
		start++;

	for (i = start; i < max_len; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);

	return (0);
}

/**
 * isNumber - checks if argument is a number
 * @str: input string
 * Return: false if str is not a number otherwise true
*/
bool isNumber(char *str)
{
	/* if the first character is negative skip */
	if (*str == 43)
		str++;

	while (*str != '\0')
	{
		if ((*str < 48 || *str > 57))
			return (false);

		str++;
	}

	return (true);
}

/**
 * handleError - print Error and exit with status 98
*/
void handleError(void)
{
	printf("Error\n");
	exit(98);
}
