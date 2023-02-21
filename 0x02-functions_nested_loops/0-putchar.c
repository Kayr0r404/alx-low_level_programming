#include <unistd.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints _putchar, followed by a new line'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "_putchar\n";
	const int len = sizeof(msg) - 1;

	write(STDERR_FILENO, msg, len);
	return (0);
}
