#include <stdio.h>

int main()
{
    int t, i;
    int n, j, max;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n];
        int ans = 1;
        for (j = 0; j < n; j++)
            scanf("%d", &a[j]);
        max = a[0];
        for (j = 0; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                ans = j + 1;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
