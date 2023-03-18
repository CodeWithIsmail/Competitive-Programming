#include <stdio.h>
int main()
{
    int n, i, j, d = 0, c = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
            d++;
        c = 0;
    }
    printf("%d\n", n - d);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            printf("%d ", a[i]);
        c = 0;
    }
    printf("%d\n", a[n - 1]);
}
