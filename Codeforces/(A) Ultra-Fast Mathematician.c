#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);
    int x = strlen(a);
    int i;
    for (i = 0; i < x; i++)
    {
        if (a[i] == b[i])
            printf("0");
        else
            printf("1");
    }
    printf("\n");
}
