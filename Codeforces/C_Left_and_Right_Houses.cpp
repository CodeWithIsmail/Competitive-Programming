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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        string a;

        cin >> n >> a;
        ll pichone0[n + 1] = {0}, samne1[n + 1] = {0};
        for (i = 0; i < n; i++)
        {
            if (a[i] == '0')
                pichone0[i + 1] = pichone0[i] + 1;
            else
                pichone0[i + 1] = pichone0[i];
        }
        // pichone0[n]=
        ll count1 = 0;
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] == '1')
                count1++;
            samne1[i] = count1;
        }
        // for (i = 0; i <= n; i++)
        // {
        //     cout << pichone0[i] << " ";
        // }
        // cout << "\n";
        // for (i = 0; i <= n; i++)
        // {
        //     cout << pichone1[i] << " ";
        // }
        // cout << "\n";

        // for (i = 0; i <= n; i++)
        // {
        //     cout << samne0[i] << " ";
        // }
        // cout << "\n";
        // for (i = 0; i <= n; i++)
        // {
        //     cout << samne1[i] << " ";
        // }
        double temp = LONG_MAX;
        ll ans = LONG_MAX;
        for (i = 0; i <= n; i++)
        {

            ll le = i;
            ll target1 = (le + 1) / 2;
            ll ri = n - le;
            ll target2 = (ri + 1) / 2;

            if (pichone0[i] >= target1 && samne1[i] >= target2)
            {
                double calc = fabs((double)n / 2 - i);
                if (calc < temp)
                {
                    ans = i;
                    temp = calc;
                }
                if (calc == temp)
                {
                    // if (ans == 0)
                    //     ans = i;
                    // ans = min(ans, i);
                    temp = calc;
                }
            }
        }
        cout << ans << "\n";
    }
}