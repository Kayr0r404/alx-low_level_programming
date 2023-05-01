#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = str_concat("Best ", "School !!!");
    printf("%s\n", concat);
    free(concat);

    concat = str_concat("Karabo ", "Mahlare");
    printf("%s\n", concat);
    free(concat);

    concat = str_concat("Karabo ", "Mahlare");
    printf("%s\n", concat);
    free(concat);

    concat = str_concat(NULL, NULL);
    printf("%s\n", concat);
    free(concat);

    concat = str_concat(NULL, "Mahlare");
    printf("%s\n", concat);
    free(concat);

    concat = str_concat(NULL, "Mahlare");
    printf("%s\n", concat);
    free(concat);

    concat = str_concat("Karabo ", NULL);
    printf("%s\n", concat);
    free(concat);

    concat = str_concat("Karabo ", "Mahlare");
    printf("%s\n", concat);
    free(concat);

    return (0);
}
