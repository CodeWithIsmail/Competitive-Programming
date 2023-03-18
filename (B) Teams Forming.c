#include <stdio.h>

int main()
{
    int n, i, j, total = 0, temp;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i = i + 2)
    {
        total = total + a[i + 1] - a[i];
    }
    printf("%d\n", total);

    return 0;
}