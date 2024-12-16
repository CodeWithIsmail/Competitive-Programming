#include <stdio.h>
int visited[7] = {0};
char country[7][50]=
{
    "Bangladesh","India","Pakistan","Turkey","Japan","China","Russia"};

int graph[7][7] =
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
    printf("%s ", country[i]);
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
