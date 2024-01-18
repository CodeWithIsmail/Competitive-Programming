#include <stdio.h>
int main()
{
    int n, k;
    int member = 0;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if ((a[i] + k) <= 5)
            member++;
    }
    printf("%d\n", member / 3);
}
