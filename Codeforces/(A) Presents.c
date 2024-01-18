#include <stdio.h>
int main()
{
    int n, i, x;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        x = a[i];
        b[x - 1] = i + 1;
    }

    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
}
