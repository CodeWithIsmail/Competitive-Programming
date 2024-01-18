#include <stdio.h>
int main()
{
    int n, i, j, c = 0;
    scanf("%d", &n);
    int a[n][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if ((a[i][0] == 1 && a[i][1] == 1) || (a[i][0] == 1 && a[i][2] == 1) || (a[i][1] == 1 && a[i][2] == 1))
            c++;
    }

    printf("%d\n", c);
}
