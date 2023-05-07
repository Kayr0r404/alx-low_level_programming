#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Prototype: int get_endianness(void);
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
    union EndianConversion u;
    /* Set the value of the union to 1. */
    u.big_endian = 1;

    /* Check if the least significant byte is 1. */
    if (u.little_endian[0] == 1)
    {
        /* The machine is little endian. */
        return 1;
    }
    /* The machine is big endian. */
    return 0;
}
