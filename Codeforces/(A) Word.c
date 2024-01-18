#include <stdio.h>
int main()
{
    char a[101];
    gets(a);
    int x = strlen(a);
    int i, upper = 0, lower = 0;
    for (i = 0; i < x; i++)
    {
        if (a[i] > 90)
            lower++;
        else
            upper++;
    }
    if (upper > lower)
    {
        for (i = 0; i < x; i++)
            if (a[i] > 90)
                a[i] = a[i] - 32;
    }
    else
    {
        for (i = 0; i < x; i++)
            if (a[i] < 91)
                a[i] = a[i] + 32;
    }

    printf("%s\n", a);
}
