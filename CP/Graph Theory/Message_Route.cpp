// dijkstra with path print
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx = 1e5 + 123;
ll shortestDistance[mx];
ll parent[mx];
vector<ll> path;
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
        path.push_back(node);
        // cout << node << " ";
        return;
    }
    pathPrint(parent[node]);
    path.push_back(node);
    // cout << node << " ";
}
int main()
{
    ll n, m, i;
    cin >> n >> m;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adjacencyList[u].push_back({v, 1});
        adjacencyList[v].push_back({u, 1});
    }
    dijkstra(1, n);
    if (shortestDistance[n] == LONG_LONG_MAX)
        cout << "IMPOSSIBLE";
    else
    {
        pathPrint(n);
        cout << path.size() << "\n";
        for (auto x : path)
            cout << x << " ";
    }
}