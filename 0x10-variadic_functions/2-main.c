#include "variadic_functions.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 2, NULL, "Django");
    print_strings(", ", 2, "Jay", NULL);
    print_strings("; ", 4, "You know", "", "nothing", NULL);
    return (0);
}
