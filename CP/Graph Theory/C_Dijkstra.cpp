// https://codeforces.com/problemset/problem/20/C/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx = 1e5 + 123;
ll shortestDistance[mx];
ll parent[mx];
vector<pair<ll, ll>> adjacencyList[mx];

void dijkstra(ll source, ll totalNode)
{
    for (ll i = 1; i <= totalNode; i++)
        shortestDistance[i] = LONG_LONG_MAX;
    for (ll i = 1; i <= totalNode; i++)
        parent[i] = -1;
    shortestDistance[source] = 0;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, source});

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
                parent[node] = currentNode;
            }
        }
    }
}
void pathPrint(ll node)
{
    if (parent[node] == -1)
    {
        cout << node << " ";
        return;
    }
    pathPrint(parent[node]);
    cout << node << " ";
}
int main()
{
    ll n, m, i;
    cin >> n >> m;
    while (m--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adjacencyList[u].push_back({v, w});
        adjacencyList[v].push_back({u, w});
    }
    dijkstra(1, n);
    if (shortestDistance[n] == LONG_LONG_MAX)
        cout << -1;
    else
        pathPrint(n);
}