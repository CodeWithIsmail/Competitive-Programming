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

const ll mx = 1e5 + 12;
bool vis[mx];
map<ll, vl> adList;
deque<ll> nodes;
bool done = false;
ll target = -1;
map<pll, bool> exist;

void dfs(ll current, ll par)
{
    if (done)
        return;
    nodes.pb(current);
    vis[current] = true;
    for (auto x : adList[current])
    {
        if (done)
            break;
        if (x != par)
        {
            if (vis[x])
            {
                done = true;
                target = x;
                nodes.pb(x);
                break;
            }
            else
                dfs(x, current);
        }
    }
}

int main()
{
    optimize();
    ll n, m, i, a, b;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        adList[a].pb(b);
        adList[b].pb(a);
        exist[{a, b}] = true;
        exist[{b, a}] = true;
    }
    for (i = 1; i <= n; i++)
        sort(rall(adList[i]));

    for (i = 1; i <= n && !done; i++)
    {
        nodes.clear();
        if (!vis[i])
            dfs(i, -1);
    }

    if (!done)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    while (nodes.front() != target)
        nodes.pop_front();
    map<ll, bool> check;
    vl ans;
    ans.pb(nodes[0]);
    for (i = 1; i < nodes.size() - 1; i++)
    {
        if (exist[{nodes[i], ans.back()}] && exist[{nodes[i], nodes[i + 1]}])
            ans.pb(nodes[i]);
    }

    cout << ans.size() + 1 << "\n";
    for (auto x : ans)
        cout << x << " ";
    cout << ans[0];
}