#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c)
        printf("%d\n", c + 1 - a - b);
    else if (a + c <= b)
        printf("%d\n", b + 1 - a - c);
    else if (b + c <= a)
        printf("%d\n", a + 1 - b - c);
    else
        printf("0\n");
    return 0;
}
