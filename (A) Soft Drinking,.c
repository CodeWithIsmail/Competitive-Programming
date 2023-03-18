#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int x, y, z, min;

    x = (k * l) / nl;
    y = c * d;
    z = p / np;

    min = x;
    if (y < min)
        min = y;
    if (z < min)
        min = z;

    printf("%d\n", min / n);
}
