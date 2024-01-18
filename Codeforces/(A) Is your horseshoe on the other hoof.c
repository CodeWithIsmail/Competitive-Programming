#include <stdio.h>
int main()
{
    long int a, b, c, d;
    int e = 0;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    if (a == b || a == c || a == d)
        e++;
    if (b == c || b == d)
        e++;
    if (c == d)
        e++;
    printf("%d\n", e);
    return 0;
}