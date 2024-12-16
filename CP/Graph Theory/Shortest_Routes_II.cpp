#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 510, inf = LONG_LONG_MAX;
ll dis[mx][mx];
ll vertex, edge, query;

void floyd_warshall()
{
    ll i, j, k;

    for (k = 1; k <= vertex; k++)
    {
        for (i = 1; i <= vertex; i++)
        {
            for (j = 1; j <= vertex; j++)
            {
                if (dis[i][k] != inf && dis[k][j] != inf)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
}
int main()
{
    ll i, j;
    cin >> vertex >> edge >> query;
    for (i = 1; i <= vertex; i++)
    {
        for (j = 1; j <= vertex; j++)
        {
            i == j ? dis[i][j] = 0 : dis[i][j] = inf;
        }
    }
    while (edge--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        dis[u][v] = min(w, dis[u][v]);
        dis[v][u] = min(w, dis[v][u]);
    }

    floyd_warshall();

    while (query--)
    {
        ll u, v;
        cin >> u >> v;
        dis[u][v] == inf ? cout << -1 : cout << dis[u][v];
        cout << endl;
    }
}