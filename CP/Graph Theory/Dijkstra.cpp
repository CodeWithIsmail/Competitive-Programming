#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 123;
vector<pair<int, int>> adjacencyList[mx];
int shortestDistance[mx];

void dijkstra(int source, int totalNode)
{
    for (int i = 0; i < totalNode; i++)
        shortestDistance[i] = INT_MAX;
    shortestDistance[source] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source}); // pair of cost and node index
    while (!pq.empty())
    {
        int currentNode = pq.top().second;
        int currentCost = pq.top().first;
        pq.pop();

        if (currentCost > shortestDistance[currentNode])
            continue;
        for (auto x : adjacencyList[currentNode])
        {
            int cost = x.second;
            int node = x.first;
            if (currentCost + cost < shortestDistance[node]) // relaxation when a shortest path found
            {
                shortestDistance[node] = currentCost + cost;
                pq.push({shortestDistance[node], node});
            }
        }
    }
}
int main()
{
    int n, m, i; // n - # of vertex, m- # of edges
    cin >> n >> m;

    for (i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w; // there is a path between vertex u and v which cost is w

        adjacencyList[u].push_back({v, w});
        adjacencyList[v].push_back({u, w});
    }

    dijkstra(0, n);
    for (i = 0; i < n; i++)
    {
        cout << shortestDistance[i] << endl;
    }
}