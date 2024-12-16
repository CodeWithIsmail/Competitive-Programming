#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 123;
ll parent[mx], Size[mx];

void make(ll i)
{
    parent[i] = i;
    Size[i] = 1;
}
ll parentFind(ll u)
{
    if (u == parent[u])
        return u;
    return parent[u] = parentFind(parent[u]);
}
void Union(ll a, ll b)
{
    if (Size[a] < Size[b])
        swap(a, b);
    parent[b] = a;
    Size[a] += Size[b];
}
int main()
{
    ll vertex, edge, i;
    cin >> vertex >> edge;
    vector<pair<ll, pair<ll, ll>>> graph;
    for (i = 0; i < edge; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        graph.push_back({w, {u, v}});
    }
    for (i = 0; i < vertex; i++)
        make(i);
    sort(graph.begin(), graph.end());
    ll cost = 0, totalEdge = 0;

    for (auto x : graph)
    {
        ll w = x.first;
        ll u = parentFind(x.second.first);
        ll v = parentFind(x.second.second);
        if (u != v)
        {
            cost += w;
            Union(u, v);
            totalEdge++;
        }
        if (totalEdge == vertex - 1)
            break;
    }
    totalEdge == vertex - 1 ? cout << cost : cout << "IMPOSSIBLE";
}