#include <bits/stdc++.h>
using namespace std;
const int mx = 500;
int graph[mx][mx], pre[mx];
bool visited[mx];
int v, e, source, sink;
int mx_flow = 0;

bool bfs()
{
    queue<int> q;
    q.push(source);
    memset(visited, false, sizeof(visited));
    visited[source] = 1;
    pre[source] = -1;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        for (int i = 1; i <= v; i++)
        {
            if (!visited[i] && graph[current][i] > 0)
            {
                q.push(i);
                visited[i] = 1;
                pre[i] = current;
            }
        }
    }
    return visited[sink];
}

void ford_fulkerson()
{
    while (bfs())
    {
        int min_cap = INT_MAX;
        int temp = sink;
        while (pre[temp] != -1)
        {
            min_cap = min(min_cap, graph[pre[temp]][temp]);
            temp = pre[temp];
        }
        mx_flow += min_cap;
        temp = sink;
        while (pre[temp] != -1)
        {
            graph[pre[temp]][temp] -= min_cap;
            graph[temp][pre[temp]] += min_cap;
            temp = pre[temp];
        }
    }
}
int main()
{
    freopen("lab_input.txt", "r", stdin);
    cin >> v >> source >> sink >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v, cap;
        cin >> u >> v >> cap;
        graph[u][v] = graph[v][u] = cap;
    }
    fclose(stdin);
    ford_fulkerson();
    cout << "The bandwidth is "<<mx_flow;
}