///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

// Data Type:
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

// Shortcut:
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define YES printf("YES");
#define Yes printf("Yes");
#define NO printf("NO");
#define No printf("No");

// Const value:
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

// Optimize cin cout:
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// Fraction:
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

const ll MAXN = 100005;
const ll LOG = 17;

vl tree[MAXN];
ll up[MAXN][LOG], depth[MAXN];
ll N;

void dfs(ll v, ll parent)
{
    up[v][0] = parent;
    for (ll i = 1; i < LOG; i++)
    {
        if (up[v][i - 1] != -1)
            up[v][i] = up[up[v][i - 1]][i - 1];
        else
            up[v][i] = -1;
    }
    for (ll u : tree[v])
    {
        if (u != parent)
        {
            depth[u] = depth[v] + 1;
            dfs(u, v);
        }
    }
}
ll lca(ll u, ll v)
{
    if (depth[u] < depth[v])
        swap(u, v);
    for (ll i = LOG - 1; i >= 0; i--)
    {
        if (up[u][i] != -1 && depth[up[u][i]] >= depth[v])
            u = up[u][i];
    }

    if (u == v)
        return u;
    for (ll i = LOG - 1; i >= 0; i--)
    {
        if (up[u][i] != up[v][i])
        {
            u = up[u][i];
            v = up[v][i];
        }
    }

    return up[u][0];
}
ll get_kth_ancestor(ll u, ll k)
{
    for (ll i = 0; i < LOG; i++)
    {
        if (k & (1 << i))
        {
            u = up[u][i];
            if (u == -1)
                break;
        }
    }
    return u;
}
ll find_middle(ll u, ll v)
{
    ll ancestor = lca(u, v);
    ll dist = (depth[u] + depth[v] - 2 * depth[ancestor]) / 2;

    if (depth[u] - depth[ancestor] >= dist)
        return get_kth_ancestor(u, dist);
    else
    {
        return get_kth_ancestor(v, depth[u] + depth[v] - 2 * depth[ancestor] - dist);
    }
}
int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, N;
        cin >> N;
        for (i = 1; i <= N; i++)
        {
            tree[i].clear();
            depth[i] = 0;
            for (j = 0; j < LOG; j++)
                up[i][j] = -1;
        }

        for (i = 1; i < N; i++)
        {
            ll u, v;
            cin >> u >> v;
            tree[u].pb(v);
            tree[v].pb(u);
        }

        dfs(1, -1);
        ll Q;
        cin >> Q;
        while (Q--)
        {
            ll u, v;
            cin >> u >> v;
            cout << find_middle(u, v) << "\n";
        }
    }
}
