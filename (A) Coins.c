#include <stdio.h>

int main()
{
    long int n, s;
    scanf("%ld %ld", &n, &s);
    if (s % n == 0)
        printf("%ld\n", s / n);
    else
        printf("%ld\n", s / n + 1);
    return 0;
}