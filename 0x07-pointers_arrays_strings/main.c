#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    char s[] = "";
    char *p = strstr(str, "kar");
    int len = 0;
  
  printf("%d\n", sizeof(str));
    while (s[len] != '\0')
        len++;
 
    // printf("%d\n", len);
    int i;
    for (i = 0; i < 100; i++)
        printf("%d\n", i % 10);

    // if (p) {
        printf("%s\n", p);
    // } else {
        // printf("Substring not found\n");
    // }

    return 0;
}
