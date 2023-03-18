#include <stdio.h>
int main()
{
    int n, i, x;
    char a[100];
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {

        gets(a);
        x = strlen(a);
        if (x > 10)
        {
            printf("%c%d%c\n", a[0], x - 2, a[x - 1]);
        }
        else
            printf("%s\n", a);
    }
}
