#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    long int a, b, c, d, e;
    a = n / 100;
    b = (n % 100) / 20;
    c = ((n % 100) % 20) / 10;
    d = (((n % 100) % 20) % 10) / 5;

    e = (((n % 100) % 20) % 10) % 5;
    printf("%ld\n", a + b + c + d + e);
}