#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2510, inf = LONG_LONG_MAX;
vector<vector<ll>> adj;
ll dis[mx], parent[mx], n, m, cycle_nood = -1;

bool bellman_ford()
{
    ll i, j;
    for (i = 1; i <= n; i++)
    {
        dis[i] = inf;
        parent[i] = 0;
    }
    dis[1] = 0;
    bool cycle = false;

    for (i = 0; i < n; i++)
    {
        cycle = false;
        for (auto edge : adj)
        {
            ll u = edge[0], v = edge[1], w = edge[2];
            if (dis[u] < inf)
            {
                if (w + dis[u] < dis[v])
                {
                    dis[v] = max(-inf, w + dis[u]);
                    parent[v] = u;
                    cycle = true;
                    cycle_nood = v;
                }
            }
        }
    }
    return cycle;
}
void print_cycle(ll node)
{
    ll i;
    vector<ll> path;
    for (i = 0; i < n; i++)
    {
        path.push_back(node);
        // cout << node << " ";
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
        cout << x << " ";
}
int main()
{
    ll i;
    cin >> n >> m;

    while (m--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj.push_back({u, v, w});
    }
    if (bellman_ford())
    {
        cout << "YES\n";
        // cout<<parent[1]<<" ";
        // cout << cycle_nood << " ";
        print_cycle(cycle_nood);
    }
    else
        cout << "NO";
}