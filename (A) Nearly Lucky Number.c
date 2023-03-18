#include <stdio.h>
int main()
{
    long long int n, a;
    int count = 0;
    scanf("%lld", &n);
    for (; n;)
    {
        a = n % 10;
        n = n / 10;
        if (a == 4 || a == 7)
            count++;
    }
    if (count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");
}
