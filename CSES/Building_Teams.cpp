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
map<ll, vl> adList;
map<ll, ll> number;
bool isVis[mx];
bool check = true;

void dfs(ll current, ll num)
{
    isVis[current] = true;
    number[current] = num;
    for (auto x : adList[current])
    {
        if (!isVis[x])
        {
            ll newNum = 1;
            if (newNum == num)
                newNum = 2;
            dfs(x, newNum);
        }
        else
        {
            if (number[x] == num)
                check = false;
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
    }
    for (i = 1; i <= n; i++)
    {
        if (!isVis[i])
            dfs(i, 1);
    }
    if (check)
    {
        for (i = 1; i <= n; i++)
            cout << number[i] << " ";
    }
    else
        cout << "IMPOSSIBLE";
}