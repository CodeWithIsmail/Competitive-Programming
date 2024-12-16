#include <stdio.h>
int visited[10] = {0};


int graph[10][10] =
    {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
void dfs(int start_vertex)
{
    int i;
    visited[start_vertex] = 1;
    printf("%s \n", country[start_vertex]);
    for (i = 0; i < 7; i++)
    {
        if (visited[i] == 0 && graph[start_vertex][i] == 1)
        {
            dfs(i);
        }
    }
}
int main()
{
    dfs(3);
}