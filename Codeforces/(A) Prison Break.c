#include <stdio.h>

int main()
{
    int i, t;
    int a, b;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b);
    }
    return 0;
}
