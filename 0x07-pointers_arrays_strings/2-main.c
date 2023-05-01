#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "hello";
    char c1 = 'e';
    char *result1 = _strchr(s1, c1);

    char *s2 = "hello";
    char c2 = 'z';
    char *result2 = _strchr(s2, c2);

    char *s3 = "hello";
    char c3 = '\0';
    char *result3 = _strchr(s3, c3);

    char *s4 = "";
    char c4 = 'a';
    char *result4 = _strchr(s4, c4);

    char *s5 = "";
    char c5 = '\0';
    char *result5 = _strchr(s5, c5);
    printf("Result 1: %s\n", result1);
    printf("Result 2: %s\n", result2);
    printf("Result 3: %s\n", result3);
    printf("Result 4: %s\n", result4);
    printf("Result 5: %s\n", result5);

    return (0);
}
