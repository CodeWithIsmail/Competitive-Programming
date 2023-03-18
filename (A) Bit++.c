#include <stdio.h>
int main()
{
    int x = 0;
    int n, i;
    scanf("%d", &n);

    char a[n][4];
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i][0] == '+' || a[i][1] == '+')
            x++;
        else if (a[i][0] == '-' || a[i][1] == '-')
            x--;
    }

    printf("%d\n", x);
}
