#include <stdio.h>

int main()
{
    int n, i, j, count = 0;
    scanf("%d", &n);
    int p;
    scanf("%d", &p);
    int a[p];
    for (i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
    int b[q];
    for (i = 0; i < q; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[p + q];
    for (i = 0; i < p; i++)
        c[i] = a[i];
    for (i = p; i < p + q; i++)
        c[i] = b[i - p];

    for (i = 0; i < p + q; i++)
    {
        for (j = i + 1; j < p + q; j++)
        {
            if (c[i] == c[j])
            {
                count++;
                break;
            }
        }
    }
    if (p + q - count == n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");

    return 0;
}