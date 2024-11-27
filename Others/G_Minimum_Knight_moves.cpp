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
ll visited = 0;
pll st, en;

void bfs()
{
    queue<pll> q;
    q.push(st);
    while (!q.empty() && !vis[en])
    {
        pll temp = q.front();
        vis[temp] = true;
        visited++;
        q.pop();
        for (auto x : adList[temp])
        {
            if (!vis[x])
            {
                q.push(x);
            }
        }
    }
}
void graphGen()
{
    ll i, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            pll p = {i, j};
            if (i - 2 > 0 && j - 1 > 0)
                adList[p].pb({i - 2, j - 1});
            if (i - 2 > 0 && j + 1 < 9)
                adList[p].pb({i - 2, j + 1});
            if (i + 2 < 9 && j - 1 > 0)
                adList[p].pb({i + 2, j - 1});
            if (i + 2 < 9 && j + 1 < 9)
                adList[p].pb({i + 2, j + 1});
            if (j - 2 > 0 && i - 1 > 0)
                adList[p].pb({i - 1, j - 2});
            if (j - 2 > 0 && i + 1 < 9)
                adList[p].pb({i + 1, j - 2});
            if (j + 2 < 9 && i - 1 > 0)
                adList[p].pb({i - 1, j + 2});
            if (j + 2 < 9 && i + 1 < 9)
                adList[p].pb({i + 1, j + 2});
        }
    }
}
int main()
{
    optimize();
    graphGen();
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        st = {9 - (a[1] - '0'), a[0] - 'a' + 1};
        en = {9 - (b[1] - '0'), b[0] - 'a' + 1};
        // cout << st.first << " " << st.second << "\n";
        // cout << en.first << " " << en.second << "\n";

        bfs();
        cout << visited << "\n";
        visited = 0;
        vis.clear();
    }
}