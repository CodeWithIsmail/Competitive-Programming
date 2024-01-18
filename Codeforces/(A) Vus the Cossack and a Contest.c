#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if (n <= m && n <= k)
        printf("Yes");
    else
        printf("No");

    return 0;
}