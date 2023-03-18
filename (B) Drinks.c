#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int s = 0;
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    printf("%.12f\n", (float)s / n);

    return 0;
}