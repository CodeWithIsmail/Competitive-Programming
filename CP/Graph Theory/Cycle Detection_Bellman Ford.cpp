// https://onlinejudge.org/external/5/558.pdf
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1010, inf = LONG_LONG_MAX;
ll dis[mx];
vector<vector<ll>> adj;

bool bellman_ford(ll n)
{
    ll i, j;
    for (i = 0; i < n; i++)
        dis[i] = inf;
    dis[0] = 0;
    bool cycle = false;
    for (i = 0; i < n; i++)
    {
        cycle = false;
        for (auto edge : adj)
        {
            ll u = edge[0], v = edge[1], w = edge[2];
            if (dis[u] < inf)
            {
                if (dis[u] + w < dis[v])
                {
                    dis[v] = max(-inf, dis[u] + w);
                    cycle = true;
                }
            }
        }
    }
    return cycle;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        adj.clear();
        ll n, m, i;
        cin >> n >> m;

        for (i = 0; i < m; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj.push_back({u, v, w});
        }
        bellman_ford(n) ? cout << "" : cout << "not ";
        cout << "possible\n";
    }
}