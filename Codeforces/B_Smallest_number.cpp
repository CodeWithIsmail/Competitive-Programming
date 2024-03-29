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
    ll i, j, k, l, ans = LONG_LONG_MAX;
    char c[3];
    vl a;
    for (i = 0; i < 4; i++)
    {
        ll temp;
        cin >> temp;
        a.pb(temp);
    }
    for (i = 0; i < 3; i++)
        cin >> c[i];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                for (l = 0; l < 4; l++)
                {
                    if (i != j && i != k && i != l && j != k && j != l && k != l)
                    {
                        vl v = {a[i], a[j], a[k], a[l]};
                        ll temp = v[0];
                        for (ll x = 0; x < 3; x++)
                        {
                            if (c[x] == '+')
                                temp += v[x + 1];
                            else
                                temp *= v[x + 1];
                        }
                        ans = min(ans, temp);

                        ll temp1 = 0, temp2 = 0;
                        if (c[0] == '+')
                            temp1 = v[0] + v[1];
                        else
                            temp1 = v[0] * v[1];
                        if (c[1] == '+')
                            temp2 = v[2] + v[3];
                        else
                            temp2 = v[2] * v[3];
                        if (c[2] == '+')
                            temp2 += temp1;
                        else
                            temp2 *= temp1;

                        ans = min(ans, temp2);
                    }
                }
            }
        }
    }
    cout << ans;
}