#include "main.h"
/**
*swap_int - Entry point
*@a: 'integer'
*@b: 'integer'
*Description: 'Write a function that swaps
*the values of two integers.
*Prototype: void swap_int(int *a, int *b)'
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

