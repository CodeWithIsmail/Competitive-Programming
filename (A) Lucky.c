#include <stdio.h>
int main()
{
    int t, i;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        char a[7];
        scanf("%s", a);
        int x = a[0] + a[1] + a[2];
        int y = a[3] + a[4] + a[5];
        if (x == y)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
