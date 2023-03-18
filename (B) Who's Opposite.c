#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int a, b, c, d, n;
        scanf("%ld %ld %ld", &a, &b, &c);
        d = abs(a - b);
        n = d * 2;
        if (n % 2 != 0 || (d == 1 && a + b > 3) || a > n || b > n || c > n)
            printf("-1\n");
        else
        {

            if (c > n / 2)
                printf("%ld\n", c - d);
            else
                printf("%ld\n", c + d);
        }
    }
}
