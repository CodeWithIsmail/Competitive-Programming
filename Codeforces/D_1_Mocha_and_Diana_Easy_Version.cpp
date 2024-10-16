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
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");

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

struct UnionFind
{
    vl parent, rank;
    UnionFind(ll n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (ll i = 1; i <= n; i++)
            parent[i] = i;
    }
    ll find(ll u)
    {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }
    bool unite(ll u, ll v)
    {
        ll rootU = find(u);
        ll rootV = find(v);
        if (rootU == rootV)
            return false;
        if (rank[rootU] < rank[rootV])
            parent[rootU] = rootV;
        else if (rank[rootU] > rank[rootV])
            parent[rootV] = rootU;
        else
        {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
        return true;
    }
    bool sameTree(ll u, ll v)
    {
        return find(u) == find(v);
    }
};

int main()
{
    optimize();
    ll n, x, y, i, j;
    cin >> n >> x >> y;
    ll allPair[n + 1][n + 1];
    UnionFind ufa(n + 1), ufb(n + 1);
    vpl ans;
    memset(allPair, 0, sizeof(allPair));

    for (i = 1; i <= x; i++)
    {
        ll u, v;
        cin >> u >> v;
        ufa.unite(u, v);
        allPair[u][v] = allPair[v][u] = 1;
    }
    for (i = 1; i <= y; i++)
    {
        ll u, v;
        cin >> u >> v;
        ufb.unite(u, v);
        allPair[u][v] = allPair[v][u] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (allPair[i][j] == 0)
            {
                if (!ufa.sameTree(i, j) && !ufb.sameTree(i, j))
                {
                    ufa.unite(i, j);
                    ufb.unite(i, j);
                    ans.pb({i, j});
                }
            }
        }
    }

    cout << ans.size() << "\n";
    for (auto x : ans)
        cout << x.first << " " << x.second << "\n";
}
