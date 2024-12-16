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
int main()
{
    ll t, k;
    cin >> t;
    for (k = 1; k <= t; k++)
    {
        ll n, i;
        cin >> n;
        vector<pair<ll, pair<string, string>>> graph;
        set<string> name;
        map<string, ll> index;
        for (i = 0; i < n; i++)
        {
            ll w;
            string u, v;
            cin >> u >> v >> w;
            graph.push_back({w, {u, v}});
            name.insert(u);
            name.insert(v);
        }

        ll count = 0, vertex = name.size();
        for (i = 0; i < vertex; i++)
            make(i);
        for (auto x : name)
        {
            index[x] = count;
            count++;
        }
        ll cost = 0, count_edge = 0;
        sort(graph.begin(), graph.end());
        for (auto x : graph)
        {
            ll w = x.first;
            ll u = find_parent(index[x.second.first]);
            ll v = find_parent(index[x.second.second]);
            if (u != v)
            {
                Union(u, v);
                cost += w;
                count_edge++;
                if (count_edge == name.size() - 1)
                    break;
            }
        }
        cout << "Case " << k << ": ";
        count_edge == vertex - 1 ? cout << cost : cout << "Impossible";
        cout << endl;
    }
}