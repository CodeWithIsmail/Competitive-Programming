#include <stdio.h>
int main()
{

    int a1, a2, a3, b1, b2, b3, n;
    scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3, &n);
    int medal = b1 + b2 + b3;
    int cup = a1 + a2 + a3;

    if (medal % 10 == 0)
        medal = medal / 10;
    else
        medal = medal / 10 + 1;

    if (cup % 5 == 0)
        cup = cup / 5;
    else
        cup = cup / 5 + 1;

    if (n < (cup + medal))
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
