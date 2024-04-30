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

int main()
{
    optimize();
    ll n, m, K, k, i, j, ans = -1;
    cin >> n >> m >> K;
    ll a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    }

    for (i = 0; i < n; i++)
    {
        ll b[n][m];
        ll temp = K;
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < m; k++)
                b[j][k] = a[j][k];
        }
        for (j = 0; j < m; j++)
        {
            if (b[i][j] == 0)
            {
                if (temp == 0)
                    break;
                for (k = 0; k < n; k++)
                {
                    if (b[k][j] == 1)
                        b[k][j] = 0;
                    else
                        b[k][j] = 1;
                }
                temp--;
            }
        }

        if (temp % 2)
        {
            ll in, cou = LONG_LONG_MAX;
            for (k = 0; k < m; k++)
            {
                ll te = 0;
                for (j = 0; j < n; j++)
                {
                    if (b[j][k] == 1)
                        te++;
                }
                if (te < cou)
                {
                    cou = te;
                    in = k;
                }
            }
            for (k = 0; k < n; k++)
            {
                if (b[k][in] == 1)
                    b[k][in] = 0;
                else
                    b[k][in] = 1;
            }
        }

        ll count = 0;

        for (j = 0; j < n; j++)
        {
            bool ch = true;
            for (k = 0; k < m; k++)
            {
                if (b[j][k] == 0)
                {
                    ch = false;
                    break;
                }
            }
            if (ch)
                count++;
        }
        ans = max(ans, count);
    }
    cout << ans;
}