#include <stdio.h>

int main()
{
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    int max = a;
    if (b > max)
        max = b;
    x = 7 - max;
    y = 6;
    for (int i = 2; i <= 6; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            x = x / i;
            y = y / i;
        }
    }
    printf("%d/%d\n", x, y);

    return 0;
}