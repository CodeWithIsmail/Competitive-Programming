#include <stdio.h>
int main()
{
    char a[1001];
    gets(a);
    int x = strlen(a);
    if (x < 3)
    {
        printf("0\n");
        return 0;
    }
    int s = x / 3;
    int b[s];
    int j = 1, i, c = 0, count = 0;
    for (i = 0; i < s; i++)
    {
        b[i] = a[j];
        j = j + 3;
    }

    for (i = 0; i < s; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (b[i] == b[j])
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            count++;
        c = 0;
    }
    printf("%d\n", count);
}
