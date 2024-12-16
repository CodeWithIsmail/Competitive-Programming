// https://cses.fi/problemset/task/1673
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2510, inf = LONG_LONG_MAX;
ll dis[mx];
vector<vector<ll>> adj;
ll n, m;
bool bellman_ford()
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

ll shortestDistance[mx];
vector<pair<ll, ll>> adjacencyList[mx];

void dijkstra()
{
    for (ll i = 1; i <= n; i++)
        shortestDistance[i] = LONG_LONG_MAX;
    shortestDistance[1] = 0;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, 1});

    while (!pq.empty())
    {
        ll currentCost = pq.top().first;
        ll currentNode = pq.top().second;
        pq.pop();

        if (currentCost > shortestDistance[currentNode])
            continue;
        for (auto x : adjacencyList[currentNode])
        {
            ll cost = x.second;
            ll node = x.first;
            if (cost + currentCost < shortestDistance[node])
            {
                shortestDistance[node] = cost + currentCost;
                pq.push({shortestDistance[node], node});
            }
        }
    }
}
int main()
{
    cin >> n >> m;

    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj.push_back({u, v, -w});
        adjacencyList[u].push_back({v, -w});
    }
    // if (bellman_ford())
    // {
    //     cout << -1;
    // }
    // else
    // {
    for (ll i = 0; i < n - 1; i++)
        dijkstra();
    ll temp1 = -shortestDistance[n];
    dijkstra();
    ll temp2 = -shortestDistance[n];
    if (temp1 > temp2)
        cout << -1;
    else
        cout << temp1;
    // }
}