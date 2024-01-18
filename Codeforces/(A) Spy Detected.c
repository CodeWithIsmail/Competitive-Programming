#include <stdio.h>
int main()
{
    int t, i, n, c, k, j, x;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        c = 0;
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
            scanf("%d", &a[j]);
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (a[k] == a[j])
                    c++;
            }
            if (c == 1)
            {
                x = j + 1;
                break;
            }
            c = 0;
        }
        printf("%d\n", x);
    }
}
