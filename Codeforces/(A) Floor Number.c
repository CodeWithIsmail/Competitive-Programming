#include <stdio.h>
int main()
{
    int n, x, t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        if (n == 1 || n == 2)
            printf("1\n");
        else if ((n - 2) % x == 0)
            printf("%d\n", (n - 2) / x + 1);
        else if ((n - 2) % x != 0)
            printf("%d\n", (n - 2) / x + 2);
    }
}
