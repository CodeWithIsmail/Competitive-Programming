#include <stdio.h>
int main()
{
    long int n;
    int k;
    scanf("%ld %d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n--;
    }
    printf("%ld\n", n);
    return 0;
}