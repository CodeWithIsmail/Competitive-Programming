#include <stdio.h>
int main()
{
    char a[101], b[101];
    gets(a);
    gets(b);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] < 97)
            a[i] = a[i] + 32;
        if (b[i] < 97)
            b[i] = b[i] + 32;
    }

    printf("%d\n", strcmp(a, b));
    return 0;
}
