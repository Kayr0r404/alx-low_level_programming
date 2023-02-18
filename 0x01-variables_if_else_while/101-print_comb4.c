#include <stdio.h>

/**
 * main - advanced
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i, j, k, digit_i, digit_j, digit_k;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
digit_i = i + '0';
digit_j = j + '0';
digit_k = k + '0';

if (i != j && i != k && j != k)
{
putchar(digit_i);
putchar(digit_j);
putchar(digit_k);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
