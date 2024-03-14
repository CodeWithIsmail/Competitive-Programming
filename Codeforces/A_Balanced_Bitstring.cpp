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
#define Yes printf("Yes");
#define NO printf("NO\n");
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k;
        cin >> n >> k;
        string a;
        cin >> a;
        ll in[n];
        for (i = 0; i < n; i++)
        {
            if (a[i] == '0')
                in[i] = 0;
            else if (a[i] == '1')
                in[i] = 1;
            else
                in[i] = 2;
        }
        bool ans = true;
        ll target = k / 2;
        // for (i = 0; i < k; i++)
        // {
        //     if (in[i] == 2)
        //     {
        //         if (target > 0)
        //         {
        //             in[i] = 0;
        //             target--;
        //         }
        //         else
        //             in[i] = 1;
        //     }
        //     if (in[i] == 0)
        //         target--;
        // }
        for (i = 0; i <= n - k; i++)
        {
            set<ll> s;
            ll x;
            for (j = i; j < n; j += k)
            {
                if (in[i] != 2)
                {
                    s.insert(in[j]);
                    x = in[j];
                }
            }
            if (s.size() > 1)
            {
                ans = false;
                break;
            }
            for (j = i; j < n; j += k)
            {
                in[i] = x;
            }
        }
        if (ans)
            YES else NO
    }
}