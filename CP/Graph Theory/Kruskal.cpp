#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 100;
ll parent[mx];
ll Size[mx];
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
    a = parentFind(a);
    b = parentFind(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
        // union by size
    }
}
int main()
{
    freopen("Kruskal.txt", "r", stdin);
    ll vertex, edge, i, j;
    cin >> vertex >> edge;
    vector<pair<ll, pair<ll, ll>>> graph;
    map<string, ll> index;
    ll count = 0, pre_cost = 0;
    for (i = 0; i < edge; i++)
    {
        string u, v;
        ll w;
        cin >> u >> v >> w;
        pre_cost += w;
        if (index[u] == 0)
        {
            count++;
            index[u] = count;
        }
        if (index[v] == 0)
        {
            count++;
            index[v] = count;
        }
        graph.push_back({w, {index[u], index[v]}});
    }
    for (i = 0; i < vertex; i++)
        make(i);
    sort(graph.begin(), graph.end());
    ll cost = 0, totalEdge = 0;

    for (auto x : graph)
    {
        // cout << x.first << " " << x.second.first << " " << x.second.second << endl;
        ll w = x.first;
        ll u = x.second.first;
        ll v = x.second.second;
        if (parentFind(u) != parentFind(v))
        {
            cost += w;
            Union(u, v);
            // cout << (char)(u + 'a') << " " << (char)(v + 'a') << " " << w << endl;
            totalEdge++;
        }
        if (totalEdge == vertex - 1)
            break;
    }
    // for (i = 0; i < vertex; i++)
    //     cout << parent[i] << " ";
    // cout << endl;
    cout << "Save Cost: " << pre_cost - cost << endl;
}