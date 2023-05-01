#include <stdio.h>

int is_divisible(int n, int divisor) {
    if (divisor == 1) {  // Base case: reached smallest divisor
        return 0;  // Number is not divisible by any number less than itself
    } else if (n % divisor == 0) {  // Base case: found a divisor other than 1 and itself
        return 1;  // Number is not prime
    } else {
        return is_divisible(n, divisor - 1);  // Recursive call with next smaller divisor
    }
}

int is_prime_number(int n) {
    if (n <= 1) {  // Special case: 1 and below are not prime
        return 0;
    }
    return !is_divisible(n, n - 1);  // Check divisibility by all numbers less than itself
}

int isPalindrome(char *s)
{
    int i, j = 0;

    while (s[j] != '\0')
    {
        j++;
    }
    
    int k = j;

    for (i = 0; i < k / 2; i++){
        if (s[i] != s[j - 1]){
            return 0;
        }
        j--;
    }

    return 1;
}

int main(void)
{
    int r;

    r = isPalindrome("level");
    printf("%d\n", r);
    r = isPalindrome("redder");
    printf("%d\n", r);
    r = isPalindrome("test");
    printf("%d\n", r);
    r = isPalindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
