#include <stdio.h>

int main()
{
    int i, t;
    long int a, b;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%ld %ld", &a, &b);
        if (a % b == 0)
            printf("0\n");
        else
            printf("%ld\n", (a / b + 1) * b - a);
    }
    return 0;
}