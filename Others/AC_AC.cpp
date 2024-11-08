#include <stdio.h>

int main()
{
    int row, col, i, j;
    scanf("%d %d", &col, &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || i == row || j == col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
