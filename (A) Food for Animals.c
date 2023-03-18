#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    long int a, b, c, x, y;
    for (i = 0; i < t; i++)
    {
        scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &x, &y);
        if (a + c >= x && b + c >= y && a + b + c >= x + y)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}