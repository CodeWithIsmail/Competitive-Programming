#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    long int i, anton = 0, danik = 0;
    char a[n + 1];
    scanf("%s", a);

    for (i = 0; i < n; i++)
    {
        if (a[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        printf("Anton\n");
    else if (danik > anton)
        printf("Danik\n");
    else if (anton == danik)
        printf("Friendship\n");
}
