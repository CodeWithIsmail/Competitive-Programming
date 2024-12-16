#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 100;
ll parent[mx], sz[mx];
void make(ll i)
{
    parent[i] = i;
    sz[i] = 1;
}
ll findParent(ll i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = findParent(parent[i]);
}
void Union(ll a, ll b)
{
    a = findParent(a);
    b = findParent(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main()
{
    freopen("Kruskal.txt", "r", stdin);
    ll i, j, vertex, edge;
    cin >> vertex >> edge;
    for (i = 0; i < vertex; i++)
        make(i);
    vector<pair<ll, pair<ll, ll>>> graph;
    for (i = 0; i < edge; i++)
    {
        char u, v;
        ll w;
        cin >> u >> v >> w;
        graph.push_back({w, {u - 'a', v - 'a'}});
    }
    // for (auto x : graph)
        // cout << x.second.first << " " << x.second.second << " " << x.first << endl;
        sort(graph.begin(), graph.end());
    ll cost = 0, count = 0;
    for (auto x : graph)
    {
        ll u = x.second.first;
        ll v = x.second.second;
        ll w = x.first;
        if (findParent(u) != findParent(v))
        {
            cost += w;
            Union(u, v);
            count++;
            cout << (char)(u + 'a') << " " << (char)(v + 'a') << " " << w << endl;
        }
        if (count == vertex - 1)
            break;
    }
    cout << "Total cost: " << cost << endl;
}