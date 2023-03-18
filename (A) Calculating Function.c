#include <stdio.h>
#include <math.h>
int main()
{
    long long int m;
    scanf("%lld", &m);
    long long int s1 = 0, s2 = 0, n, l;
    n = m / 2;
    l = m - n;
    s1 = n * (n + 1);
    s2 = l * l;
    printf("%lld\n", s1 - s2);
}
