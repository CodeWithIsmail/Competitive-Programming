#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 123;
ll parent[mx];

ll find_parent(ll i)
{
    if (parent[i] == i)
        return i;
    return find_parent(parent[i]);
}
void Union(ll u, ll v)
{
    parent[v] = u;
}
int main()
{
    ll n, m, i;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        parent[i] = i;
    for (i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        ll uR = find_parent(u);
        ll vR = find_parent(v);
        if (uR != vR)
        {
            Union(uR, vR);
        }
    }
    for (i = 0; i < n; i++)
        cout << parent[i] << " ";
    cout << endl;
}