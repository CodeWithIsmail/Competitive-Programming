#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int mid;
    if ((a > b && a < c) || (a > c && a < b))
        mid = a;
    else if ((b > a && b < c) || (b > c && b < a))
        mid = b;
    else if ((c > a && c < b) || (c > b && c < a))
        mid = c;

    printf("%d\n", abs(a - mid) + abs(b - mid) + abs(c - mid));
}
