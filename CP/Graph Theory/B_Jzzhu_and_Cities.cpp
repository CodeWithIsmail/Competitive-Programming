#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx = 1e6;
vector<vector<ll>> adjacencyList[mx];
ll shortestDistance[mx];
bool type[mx];

void dijkstra(ll source, ll totalNode)
{
    for (ll i = 1; i <= totalNode; i++)
        shortestDistance[i] = LONG_LONG_MAX;
    shortestDistance[source] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, source});

    while (!pq.empty())
    {
        ll currentCost = pq.top().first;
        ll currentNode = pq.top().second;
        pq.pop();

        if (shortestDistance[currentNode] < currentCost)
            continue;

        for (auto x : adjacencyList[currentNode])
        {
            ll node = x[0];
            ll cost = x[1];
            int temptype = x[2];

            if (cost + currentCost < shortestDistance[node])
            {
                shortestDistance[node] = cost + currentCost;
                type[node] = temptype;
                pq.push({shortestDistance[node], node});
            }
            else if (cost + currentCost == shortestDistance[node] && temptype == 0 && type[node] == 1)
            {
                type[node] = 0;
            }
        }
    }
}
int main()
{
    ll n, m, k, i, j;
    cin >> n >> m >> k;
    for (i = 1; i <= m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adjacencyList[u].push_back({v, w, 0});
        adjacencyList[v].push_back({u, w, 0});
    }
    for (i = 1; i <= k; i++)
    {
        ll v, w;
        cin >> v >> w;
        adjacencyList[1].push_back({v, w, 1});
        adjacencyList[v].push_back({1, w, 1});
    }
    dijkstra(1, n);
    for (i = 1; i <= n; i++)
        k -= type[i];
    cout << k;
}