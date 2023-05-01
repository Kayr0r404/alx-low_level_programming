#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    char *p = malloc(12);
    *p = "Mahlare";

        printf("%d\n", sizeof(p));

    return (0);
}