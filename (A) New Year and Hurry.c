#include <stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    int time = 240 - k;
    int s = 0, prb;
    for (i = 1; i <= n; i++)
    {
        s = s + i * 5;
        prb = i;
        if (s > time)
        {
            prb = i - 1;
            break;
        }
    }
    printf("%d\n", prb);
}
