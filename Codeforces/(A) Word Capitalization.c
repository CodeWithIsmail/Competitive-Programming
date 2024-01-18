#include <stdio.h>
int main()
{
    char a[1001];
    gets(a);

    if (a[0] > 90)
        a[0] = a[0] - 32;

    printf("%s", a);
    return 0;
}
