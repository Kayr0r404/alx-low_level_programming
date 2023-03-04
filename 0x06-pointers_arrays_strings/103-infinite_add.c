#include <stdio.h>
#include "main.h"
#include <string.h>
 /**
*infinite_add - Entry point
*@n1: char
*@n2: char
*@r: char
*@size_r: int
*Description: 'function that adds two numbers'
*Return: int
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 + 1 : len2 + 1;
	int i1 = len1 - 1, i2 = len2 - 1, ir = max_len - 1;
	int carry = 0;

	if (max_len > size_r)
		return (0);
	r[max_len] = '\0';
	while (i1 >= 0 || i2 >= 0)
	{
		int d1 = i1 >= 0 ? n1[i1] - '0' : 0;
		int d2 = i2 >= 0 ? n2[i2] - '0' : 0;
		int sum = d1 + d2 + carry;

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[ir] = sum + '0';
		i1--;
		i2--;
		ir--;
	}
	if (carry > 0 && ir >= 0)
	{
		r[ir] = carry + '0';
	}
	else if (carry > 0)
	{
		return (0);
	}
	return (r + ir + 1);
}

