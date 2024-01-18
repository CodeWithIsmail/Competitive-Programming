#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int h, m;
        scanf("%d %d", &h, &m);
        printf("%d\n", ((24 - h - 1) * 60 + 60 - m));
    }
}