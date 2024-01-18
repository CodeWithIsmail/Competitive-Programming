#include <stdio.h>
int main()
{
    int i, j, n, c = 0;
    scanf("%d", &n);
    int a[n][2];
    for (i = 0; i < n; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][0] == a[j][1])
            {
                c++;
            }
        }
    }
    printf("%d\n", c);
}
