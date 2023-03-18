#include <stdio.h>
int main()
{
    int i, t, n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n <= 1399)
            printf("Division 4\n");
        else if (n >= 1400 && n <= 1599)
            printf("Division 3\n");
        else if (n >= 1600 && n <= 1899)
            printf("Division 2\n");
        else
            printf("Division 1\n");
    }
}