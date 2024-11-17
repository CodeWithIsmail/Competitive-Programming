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

map<pll, vpl> adList;
map<pll, bool> vis;
void dfs(pll current)
{
    vis[current] = true;
    for (auto x : adList[current])
    {
        if (!vis[x])
        {
            dfs(x);
        }
    }
}
int main()
{
    optimize();
    while (1)
    {
        ll n, m, i, j, ans = 0;
        cin >> m >> n;
        if (n == 0 && m == 0)
            return 0;
        vector<string> a;
        for (i = 0; i < m; i++)
        {
            string temp;
            cin >> temp;
            a.pb(temp);
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                pll p = {i, j};
                if (a[i][j] == '@')
                {
                    if (i - 1 >= 0 && a[i - 1][j] == '@')
                        adList[p].pb({i - 1, j});
                    if (i + 1 < m && a[i + 1][j] == '@')
                        adList[p].pb({i + 1, j});
                    if (j - 1 >= 0 && a[i][j - 1] == '@')
                        adList[p].pb({i, j - 1});
                    if (j + 1 < n && a[i][j + 1] == '@')
                        adList[p].pb({i, j + 1});
                    if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j - 1] == '@')
                        adList[p].pb({i - 1, j - 1});
                    if (i - 1 >= 0 && j + 1 < n && a[i - 1][j + 1] == '@')
                        adList[p].pb({i - 1, j + 1});
                    if (i + 1 < m && j - 1 >= 0 && a[i + 1][j - 1] == '@')
                        adList[p].pb({i + 1, j - 1});
                    if (i + 1 < m && j + 1 < n && a[i + 1][j + 1] == '@')
                        adList[p].pb({i + 1, j + 1});
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] == '@' && !vis[{i, j}])
                {
                    dfs({i, j});
                    ans++;
                }
            }
        }
        cout << ans << "\n";
        adList.clear();
        vis.clear();
    }
}