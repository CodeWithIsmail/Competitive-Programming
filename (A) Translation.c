#include <stdio.h>

int main()
{
    char a[101], b[101];
    gets(a);
    gets(b);
    int c = 0, i;
    int x = strlen(a);
    char d[x + 1];
    int y = strlen(b);
    for (i = 0; i < x; i++)
        d[i] = a[x - 1 - i];

    for (i = 0; i < x; i++)
    {
        if (b[i] != d[i])
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}