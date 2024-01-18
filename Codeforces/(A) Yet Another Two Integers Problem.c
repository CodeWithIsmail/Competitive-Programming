#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    long int a, b, difference;
    for (i = 0; i < t; i++)
    {
        scanf("%ld %ld", &a, &b);
        difference = abs(a - b);
        if (difference % 10 == 0)
            printf("%ld\n", difference / 10);
        else
            printf("%ld\n", difference / 10 + 1);
    }
}
