#include <stdio.h>
int main()
{
    int t, i, j, n;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        long int a[n];
        long long int m = 1;
        for (j = 0; j < n; j++)
        {
            scanf("%ld", &a[j]);
            m = m * a[j];
        }
        printf("%lld\n", 2022 * (m + n - 1));
    }
}
