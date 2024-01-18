#include <stdio.h>
int main()
{
    int t, i, j;
    int x, y;
    int a[3];

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &x);
        for (j = 0; j < 3; j++)
            scanf("%d", &a[j]);
        y = a[x - 1];
        if (y != 0 && a[y - 1] != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
