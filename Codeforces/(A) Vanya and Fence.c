#include <stdio.h>
int main()
{
    int n, h, c = 0, i;
    scanf("%d %d", &n, &h);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > h)
            c = c + 2;
        else if (a[i] <= h)
            c++;
    }
    printf("%d\n", c);
}
