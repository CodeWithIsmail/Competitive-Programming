#include <stdio.h>
int main()
{
    long int n, i;
    scanf("%ld", &n);
    long int c = 0, total = 0;
    char a[15];

    for (i = 0; i <= n; i++)
    {
        gets(a);
        if (a[0] == 'T')
            c = 4;
        else if (a[0] == 'C')
            c = 6;
        else if (a[0] == 'O')
            c = 8;
        else if (a[0] == 'D')
            c = 12;
        else if (a[0] == 'I')
            c = 20;
        total = total + c;
    }
    printf("%ld\n", total);
}