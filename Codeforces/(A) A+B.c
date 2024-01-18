#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int a, b;
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
}
