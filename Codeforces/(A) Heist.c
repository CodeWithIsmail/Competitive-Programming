#include <stdio.h>

int main()
{
    long int n, i;
    scanf("%ld", &n);
    long int a[n];
    long int max, min;
    for (i = 0; i < n; i++)
        scanf("%ld", &a[i]);
    max = a[0];
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("%ld\n", max - min + 1 - n);
}