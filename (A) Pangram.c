#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    char a[n + 1];
    scanf("%s", a);
    for (i = 0; i < n; i++)
    {
        a[i] = toupper(a[i]);
    }
    int c = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            count++;
        c = 0;
    }
    if (count == 26)
        printf("YES\n");
    else
        printf("NO\n");
}
