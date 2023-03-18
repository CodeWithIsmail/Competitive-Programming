#include <stdio.h>
int main()
{
    int t, n, i, c = 0, j, k;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        long int a[n];
        for (j = 0; j < n; j++)
            scanf("%ld", &a[j]);
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (a[j] == a[k])
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
                break;
        }
        if (c == 0)
            printf("YES\n");
        else
            printf("NO\n");
        c = 0;
    }
}