#include <stdio.h>
int main()
{
    char a[101];
    scanf("%s", a);
    int x = strlen(a);
    int b[(x + 1) / 2];
    int i, j = 0, temp;
    for (i = 0; i < (x + 1) / 2; i++)
    {
        b[i] = a[j] - 48;
        j = j + 2;
    }
    for (i = 0; i < (x + 1) / 2; i++)
    {
        for (j = i + 1; j < (x + 1) / 2; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < (x + 1) / 2 - 1; i++)
        printf("%d+", b[i]);
    printf("%d\n", b[(x + 1) / 2 - 1]);
}
