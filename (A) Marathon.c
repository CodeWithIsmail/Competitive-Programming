#include <stdio.h>
int main()
{
    long int t, a, b, c, d, i, x = 0;
    scanf("%ld", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if (a < b)
            x++;
        if (a < c)
            x++;
        if (a < d)
            x++;
        printf("%ld\n", x);
        x = 0;
    }
}
