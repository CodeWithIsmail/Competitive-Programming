#include <stdio.h>
int main()
{
    int t, i;
    long int n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%ld", &n);
        printf("%ld\n", (n - 1) / 2);
    }
}
