#include "shell.h"


/**
 * remove_space - removes leading or trailing whitespaces from a given command
 * @str: input string from the user
 *
 * Return: none
 */
void remove_space(char *str)
{
	int len = _strlen(str), i, j;
	int start = 0, end = len - 1;

	while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n')
	{
		start++;
	}

	while (end >= start &&
		   (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))
	{
		end--;
	}

	for (i = 0, j = start; j <= end; i++, j++)
	{
		str[i] = str[j];
	}
	str[i] = '\0';
}
#include <stdbool.h>

bool custom_isspace(char c) {
    // Define your criteria for white space characters here
    return (c == ' ' || c == '\t' || c == '\n');
}

int main() {
    char testChar1 = ' ';
    char testChar2 = '\t';
    char testChar3 = '\n';
    char testChar4 = 'A';

    printf("Is '%c' a white space character? %s\n", testChar1, custom_isspace(testChar1) ? "Yes" : "No");
    printf("Is '%c' a white space character? %s\n", testChar2, custom_isspace(testChar2) ? "Yes" : "No");
    printf("Is '%c' a white space character? %s\n", testChar3, custom_isspace(testChar3) ? "Yes" : "No");
    printf("Is '%c' a white space character? %s\n", testChar4, custom_isspace(testChar4) ? "Yes" : "No");

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void removeLeadingTrailingWhitespace(char *str) {
    if (str == NULL || *str == '\0') {
        return; // Return early if the string is empty or NULL
    }

    int len = strlen(str);
    int leadingSpaces = 0, trailingSpaces = 0;

    // Find the number of leading spaces
    while (isspace(str[leadingSpaces])) {
        leadingSpaces++;
    }

    // If the entire string is composed of spaces, make it an empty string
    if (leadingSpaces == len) {
        str[0] = '\0';
        return;
    }

    // Find the number of trailing spaces
    while (isspace(str[len - 1 - trailingSpaces])) {
        trailingSpaces++;
    }

    // Calculate the new length of the string (excluding leading and trailing spaces)
    int newLen = len - leadingSpaces - trailingSpaces;

    // Shift the remaining characters to the beginning of the string
    memmove(str, str + leadingSpaces, newLen);

    // Add null terminator to the end of the new string
    str[newLen] = '\0';
}

int main() {
    char str1[] = "     Hello, world!   ";
    removeLeadingTrailingWhitespace(str1);
    printf("[%s]\n", str1); // Output: [Hello, world!]

    char str2[] = "   ";
    removeLeadingTrailingWhitespace(str2);
    printf("[%s]\n", str2); // Output: []

    char str3[] = "NoSpacesHere";
    removeLeadingTrailingWhitespace(str3);
    printf("[%s]\n", str3); // Output: [NoSpacesHere]

    return 0;
}
