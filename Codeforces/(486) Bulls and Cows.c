#include <stdio.h>

int main()
{
    char a[5];
    char b[5];
    int i, j, bear = 0, cow = 0;
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; i < 4; i++)
    {
        if (a[i] == b[i])
            bear++;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i] == b[j] && i != j)
            {
                cow++;
                break;
            }
        }
    }
    printf("%d %d\n", bear, cow);
    return 0;
}