#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i == 1 && j == n)
                printf("*");
            if (j > n - i && j < n + i && i > 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
