#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][2];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int total = a[0][1];
    int max = a[0][1];
    for (i = 1; i < n - 1; i++)
    {
        total = total + a[i][1] - a[i][0];
        if (total > max)
            max = total;
    }

    printf("%d\n", max);
    return 0;
}
