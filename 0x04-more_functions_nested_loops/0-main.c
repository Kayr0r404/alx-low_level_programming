#include "main.h"
#include <stdio.h>

int main(void)
{
    char c = 'A';
    int result = _isupper(c);

    if (result == 1)
    {
        printf("%c is an uppercase letter\n", c);
    }
    else
    {
        printf("%c is not an uppercase letter\n", c);
    }

    return 0;
}

