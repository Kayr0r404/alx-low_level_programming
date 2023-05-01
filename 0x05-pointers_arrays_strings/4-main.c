#include "main.h"
#include <stdio.h>

int main(void)
{
	int strLen = 0;
	int count;
	char *s = "mahlare";
    char S = *s;

	while (*s != '\0')
	{
		strLen++;
		s++;
	}
	printf("%d\n", strLen);
    for (count = strLen - 1; count >= 0; count--){
        _putchar(S[count]);
    }
	return 0;
}
