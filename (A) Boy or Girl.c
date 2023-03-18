#include <stdio.h>
int main()
{
    char a[101];
    gets(a);
    int c = 0, d;
    int x = strlen(a);

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (a[i] == a[j])
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            d++;
        c = 0;
    }
    if (d % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
