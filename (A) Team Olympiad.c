#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i, j, k;
    int one = 0, two = 0, three = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1)
            one++;
        else if (a[i] == 2)
            two++;
        else if (a[i] == 3)
            three++;
    }
    int min = one;
    if (two < min)
        min = two;
    if (three < min)
        min = three;
    printf("%d\n", min);
    int z[min][3];
    for (i = 0; i < min; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (a[k] == j + 1)
                {
                    printf("%d ", k + 1);
                    a[k] = 0;
                    break;
                }
            }
        }
    }

    return 0;
}