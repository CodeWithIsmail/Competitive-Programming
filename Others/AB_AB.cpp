#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        int start = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", start);
            start = start + t - j;
        }
        printf("\n");
    }

    return 0;
}