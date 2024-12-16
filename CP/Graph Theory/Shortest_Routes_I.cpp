// shortest path dijkstra problem on cses
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx = 1e5 + 123;
vector<pair<ll, ll>> adjacencyList[mx];
ll shortestDistance[mx];

void dijkstra(ll source, ll totalNode)
{
    for (ll i = 1; i <= totalNode; i++)
        shortestDistance[i] = LONG_LONG_MAX;
    shortestDistance[source] = 0;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, source});
    while (!pq.empty())
    {
        ll currentNode = pq.top().second;
        ll currentCost = pq.top().first;
        pq.pop();

        if (currentCost > shortestDistance[currentNode])
            continue;

        for (auto x : adjacencyList[currentNode])
        {
            ll node = x.first;
            ll cost = x.second;
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
    ll n, m, i;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adjacencyList[u].push_back({v, w});
    }
    dijkstra(1, n);
    for (i = 1; i <= n; i++)
        cout << shortestDistance[i] << " ";
}