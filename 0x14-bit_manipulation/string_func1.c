#include "shell.h"

/**
 * _putchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


/**
 * prompt - prompts '$'
 *
 * Return: none.
 */
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
