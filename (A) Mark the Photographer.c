#include <stdio.h>
int main()
{
    int t, i, n, x, j, k, d = 0, temp;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        int a[2 * n], b[n], c[n];
        for (j = 0; j < 2 * n; j++)
            scanf("%d", &a[j]);
        for (j = 0; j < 2 * n; j++)
        {
            for (k = j + 1; k < 2 * n; k++)
            {
                if (a[j] > a[k])
                {
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        for (j = 0; j < n; j++)
            b[j] = a[j];
        for (j = n; j < 2 * n; j++)
            c[j - n] = a[j];
        for (j = 0; j < n; j++)
        {
            if ((c[j] - b[j]) < x)
            {
                d = 1;
                break;
            }
        }
        if (d == 0)
            printf("YES\n");
        else
            printf("NO\n");
        d = 0;
    }
}
