#include "main.h"

/**
*leet - entry
*@str: string
*Write a function that encodes a string into 1337.
*Letters a and A should be replaced by 4
*Letters e and E should be replaced by 3
*Letters o and O should be replaced by 0
*Letters t and T should be replaced by 7
*Letters l and L should be replaced by 1
*Prototype: char *leet(char *)'
*Return: modifed char
*/

char *leet(char *str)
{
	int i;
	char *leetStr = str;
	char leetMap[] = {'O', 'L', '?', 'E', 'A', '?', \
		'?', 'T', '?', '?', 'o', 'l', '?', 'e', 'a', '?'};
	char replaceMap[] = {'0', '1', '2', '3', '4', '5', '6', \
		'7', '8', '9', '0', '1', '2', '3', '4', '5'};

	for (i = 0; leetStr[i] != '\0'; i++)
	{
		if (leetStr[i] >= 'A' && leetStr[i] <= 'Z')
		{
			leetStr[i] = replaceMap[leetMap[leetStr[i] - 'A'] - 'A'];
		}
		else if (leetStr[i] >= 'a' && leetStr[i] <= 'z')
		{
			leetStr[i] = replaceMap[leetMap[leetStr[i] - 'a' + 10] - 'A'];
		}
	}

	return (leetStr);
}

