#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

   /* concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);

    concat = string_nconcat("Karabo ", "Mahlare", 8);
    printf("%s\n", concat);
    free(concat);

    concat = string_nconcat("Karabo ", "Mahlare", 3);
    printf("%s\n", concat);
    free(concat);*/

    concat = string_nconcat(NULL, NULL, 8);
    printf("%s\n", concat);
    free(concat);

   /* concat = string_nconcat(NULL, "Mahlare", 8);
    printf("%s\n", concat);
    free(concat);

    concat = string_nconcat(NULL, "Mahlare", 3);
    printf("%s\n", concat);
    free(concat);

    concat = string_nconcat("Karabo ", NULL, 3);
    printf("%s\n", concat);
    free(concat);

    concat = string_nconcat("Karabo ", "Mahlare", 0);
    printf("%s\n", concat);
    free(concat);*/
    return (0);
}
