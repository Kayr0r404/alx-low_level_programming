#include "main.h"
#include <stdio.h>
/**
*reverse_array - entry point
*@a: Array
*@n: array length
*Descreiption: 'Write a function that reverses the content
*of an array of integers.
*Prototype: void reverse_array(int *a, int n);
*Where n is the number of elements of the array'
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
	}
}
