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

ll n, m, k;

ll solve(string a)
{
    ll s = a.size(), i;
    vl koytax, koytadot;
    koytax.pb(0);
    koytadot.pb(0);

    for (i = 0; i < s; i++)
    {
        if (a[i] == 'x')
        {
            koytadot.pb(koytadot[i]);
            koytax.pb(1 + koytax[i]);
        }
        else if (a[i] == '.')
        {
            koytadot.pb(1 + koytadot[i]);
            koytax.pb(koytax[i]);
        }
        else if (a[i] == 'o')
        {
            koytadot.pb(koytadot[i]);
            koytax.pb(koytax[i]);
        }
    }

    ll mn = LONG_LONG_MAX;
    for (i = 1; i <= s - k + 1; i++)
    {
        if (koytax[i - 1] == koytax[i + k - 1])
        {
            ll tempdot = koytadot[i + k - 1] - koytadot[i - 1];
            mn = min(mn, tempdot);
        }
    }
    return mn;
}
int main()
{
    optimize();
    ll i, j;
    cin >> n >> m >> k;
    vector<string> v;
    ll ans = LONG_LONG_MAX;
    for (i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v.pb(temp);
        ll tempAns = solve(temp);
        ans = min(ans, tempAns);
    }

    for (i = 0; i < m; i++)
    {
        string temp = "";
        for (j = 0; j < n; j++)
        {
            temp += v[j][i];
        }
        ll tempAns = solve(temp);
        ans = min(ans, tempAns);
    }
    if (ans == LONG_LONG_MAX)
        ans = -1;
    cout << ans;
}