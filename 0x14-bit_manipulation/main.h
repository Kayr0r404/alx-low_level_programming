#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/**
 * union EndianConversion - Create a union of two integers, one big endian
 * and one little endian.
 * @big_endian: big
 * @little_endian: little
 * Description: k
 */
union EndianConversion
{
	unsigned int big_endian;
	unsigned char little_endian[sizeof(unsigned int)];
};

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif /*MAIN_H*/
