///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define pb push_back

// Optimize cin cout:
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const ll mx = 1e5 + 12;
bool vis[mx];
vl adList[mx];
vl nodes;
void findConnectedCompo(ll current)
{
    vis[current] = true;
    nodes.pb(current);
    for (auto x : adList[current])
    {
        if (!vis[x])
            findConnectedCompo(x);
    }
}
int main()
{
    optimize();
    ll n, m, i;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adList[u].pb(v);
        adList[v].pb(u);
    }

    for (i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            findConnectedCompo(i);
            cout << nodes.size() << " : ";
            for (auto x : nodes)
                cout << x << " ";
            cout << "\n";
            nodes.clear();
        }
    }
}