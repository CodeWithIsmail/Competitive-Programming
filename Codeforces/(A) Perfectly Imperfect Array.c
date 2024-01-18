#include <stdio.h>
int main()
{
    int t, i;
    int n, j;
    float root;
    int checker;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int imperfect = 0;
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            root = sqrt(a[j]);
            checker = root;
            if (checker != root)
                imperfect = 1;
        }
        if (imperfect == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
