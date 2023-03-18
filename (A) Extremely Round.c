#include <stdio.h>
int main()
{
    long int t, i;
    scanf("%ld", &t);
    for (i = 0; i < t; i++)
    {
        long int n;
        int c;
        scanf("%ld", &n);
        if (n <= 10)
            c = n;
        else if (n > 10 && n <= 100)
            c = 9 + n / 10;
        else if (n > 100 && n <= 1000)
            c = 18 + n / 100;
        else if (n > 1000 && n <= 10000)
            c = 27 + n / 1000;
        else if (n > 10000 && n <= 100000)
            c = 36 + n / 10000;
        else if (n > 100000 && n < 1000000)
            c = 45 + n / 100000;
        printf("%d\n", c);
    }
}
