#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - 'a function that prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n before the main function is executed.'
 */

void before_main(void)
{
	char const *str1 = "You're beat! and yet, you must allow,\n";
	char const *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}


