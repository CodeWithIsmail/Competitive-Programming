#include <stdio.h>
int main()
{
    int i, j, x, y;
    int a[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", (abs(2 - x) + abs(2 - y)));
    return 0;
}
