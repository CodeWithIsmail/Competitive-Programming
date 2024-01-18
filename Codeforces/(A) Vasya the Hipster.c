#include <stdio.h>
int main()
{
    int a, b, min, max;
    scanf("%d %d", &a, &b);
    min = a;
    max = b;
    if (b < min)
    {
        min = b;
        max = a;
    }
    max = (max - min) / 2;
    printf("%d %d\n", min, max);
}
