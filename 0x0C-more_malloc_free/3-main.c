#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);

    a = array_range(3, 6);
    simple_print_buffer(a, 4);
    free(a);

    a = array_range(0, 0);
    simple_print_buffer(a, 0);
    free(a);

     a = array_range(1024, 2048);
    simple_print_buffer(a, 2048 - 1024 + 1);
    free(a);

     a = array_range(4096, 4096);
    simple_print_buffer(a, 4096 - 4096 + 1);
    free(a);

     a = array_range(4096, 4000);
    simple_print_buffer(a, 97);
    free(a);

     a = array_range(-512, 512);
    simple_print_buffer(a, 512 - (-512) + 1);
    free(a);

     a = array_range(-2048, -1024);
    simple_print_buffer(a, -1024 - (-2048) + 1);
    free(a);

    return (0);
}
