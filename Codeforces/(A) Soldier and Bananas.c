#include <stdio.h>

int main()
{
    int i, k, w;
    long int n, s = 0;
    scanf("%d %ld %d", &k, &n, &w);
    for (i = 1; i <= w; i++)
        s = s + i * k;
    if (s <= n)
        printf("0\n");
    else
        printf("%ld\n", s - n);
    return 0;
}