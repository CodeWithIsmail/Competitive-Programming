#include <stdio.h>
int main()
{
    int m;
    int i, j, k, c = 0;
    int a[4];
    scanf("%d", &m);
    int n = m + 1;
    int ans;
    for (i = n;; i++)
    {
        ans = i;
        for (j = 3; j >= 0; j--)
        {
            a[j] = ans % 10;
            ans = ans / 10;
        }

        if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3] && a[2] != a[3])
        {
            printf("%d%d%d%d\n", a[0], a[1], a[2], a[3]);
            break;
        }
    }
}
