#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 123;
ll parent[mx], sz[mx];

void make(ll i)
{
    parent[i] = i;
    sz[i] = 1;
}
ll find_parent(ll i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = find_parent(parent[i]);
}
void Union(ll u, ll v)
{
    if (sz[u] < sz[v])
        swap(u, v);
    parent[v] = u;
    sz[u] += sz[v];
}
ll kruskal(vector<pair<ll, pair<ll, ll>>> graph, ll n)
{
    ll count = 0, cost = 0;
    for (auto x : graph)
    {
        ll w = x.first;
        ll u = find_parent(x.second.first);
        ll v = find_parent(x.second.second);
        if (u != v)
        {
            Union(u, v);
            count++;
            cost += w;
        }
        if (count == n)
            break;
    }
    return cost;
}
int main()
{
    ll t, j;
    cin >> t;
    for (j = 1; j <= t; j++)
    {
        ll n, i, ans = 0;
        cin >> n;
        for (i = 0; i <= n; i++)
            make(i);
        vector<pair<ll, pair<ll, ll>>> graph;
        while (1)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            if (u + v + w == 0)
                break;
            graph.push_back({w, {u, v}});
        }

        // minimum cost
        sort(graph.begin(), graph.end());
        ans = kruskal(graph, n);
        // maximum cost
        sort(graph.rbegin(), graph.rend());
        for (i = 0; i <= n; i++)
            make(i);
        ans += kruskal(graph, n);
        cout << "Case " << j << ": ";
        ans % 2 ? cout << ans << "/2" : cout << ans / 2;
        cout << endl;
        graph.clear();
    }
}