#include <stdio.h>
int main()
{
    int graph[6][6], i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            int weight;
            // printf("Enter the weight of %d and %d:\n", i + 1, j + 1);
            scanf("%d", &weight);
            graph[i][j] = weight;
        }
    }
    // printf("\nAdjecency Matrix:\n");
    // for (i = 0; i < 6; i++)
    // {
    //     for (j = 0; j < 6; j++)
    //     {
    //         printf("%d ", graph[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("\nNode   In-Degree\n");
    for (i = 0; i < 6; i++)
    {
        int indegree = 0;
        for (j = 0; j < 6; j++)
        {
            if (graph[i][j])
                indegree++;
        }
        printf(" %c       %d\n", i + 65, indegree);
    }
    printf("\nNode   Out-Degree\n");
    for (j = 0; j < 6; j++)
    {
        int outdegree = 0;
        for (i = 0; i < 6; i++)
        {
            if (graph[i][j])
                outdegree++;
        }
        printf(" %c       %d\n", j + 65, outdegree);
    }
}