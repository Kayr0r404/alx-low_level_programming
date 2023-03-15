#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int end = len - 1;

	return (check_palindrome(s, 0, end));
}

/**
 * check_palindrome - 'recursive helper function to
 * check if a string is a palindrome'
 * @s: the string to check
 * @start: the starting index of the substring to check
 * @end: the ending index of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	/* base case: if the substring has length 0 or 1, it is a palindrome */
	if (start >= end)
		return (1);

	/**
	 * recursive case: check if the first and last
	 * characters of the substring are the same
	 */
	if (s[start] != s[end])
		return (0);

	/* recurse on the substring with the first and last characters removed */
	return (check_palindrome(s, start + 1, end - 1));
}
