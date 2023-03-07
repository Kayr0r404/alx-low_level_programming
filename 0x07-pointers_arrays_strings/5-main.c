#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;
	char *name = "mahlare-karabo";
	char *subName = "are";

	t = _strstr(s, f);
	printf("%s\n", t);
	t = _strstr(name, subName);
	printf("%s\n", t);
	return (0);
}
