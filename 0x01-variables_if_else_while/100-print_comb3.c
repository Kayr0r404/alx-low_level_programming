#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i, j, digit_i, digit_j;

for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
digit_i = i + '0';
digit_j = j + '0';

if (i != j)
{
putchar(digit_i);
putchar(digit_j);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
