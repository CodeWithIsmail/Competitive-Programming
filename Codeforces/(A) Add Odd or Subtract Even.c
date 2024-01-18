#include <stdio.h>

int main()
{
    long int i, a, b;
    int t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%ld %ld", &a, &b);
        if ((a < b && (b - a) % 2 == 0) || (a > b && (a - b) % 2 != 0))
            printf("2\n");
        else if ((a < b && (b - a) % 2 != 0) || (a > b && (a - b) % 2 == 0))
            printf("1\n");
        else if (a == b)
            printf("0\n");
    }

    return 0;
}