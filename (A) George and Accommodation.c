#include <stdio.h>
int main()
{
    int i, n, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if ((a + 2) <= b)
            c++;
    }
    printf("%d\n", c);
}