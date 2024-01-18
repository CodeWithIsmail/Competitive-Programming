#include <stdio.h>

int main()
{
    int n, c = 0, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i + 1] != a[i])
            c++;
    }
    printf("%d\n", c + 1);

    return 0;
}
