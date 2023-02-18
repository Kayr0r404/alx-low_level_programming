#include <stdio.h>

/**
 * main - advanced
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j;

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
printf("%02d %02d", i, j);
if (i != 98 || j != 99)
printf(", ");
}
}
printf("\n");

return (0);
}
