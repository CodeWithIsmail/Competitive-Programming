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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll hel[n];
        for (int i = 0; i < n; i++)
        {
            cin >> hel[i];
        }

        map<ll, ll> m;
        int mon[n];

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x < 0)
                x = x * -1;
            mon[i] = x;
            m[x] = m[x] + hel[i];
        }

        ll cnt = 0;
        ll p = 0;
        int flag = 0;
        for (auto &ele : m)
        {
            ll extra = cnt + ((ele.first - p) * k);
            if (extra < ele.second)
            {
                flag = 1;
                break;
            }
            ll remain = extra - ele.second;
            cnt = remain;
            p = ele.first;
        }

        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    // optimize();
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     ll n, k, i;
    //     cin >> n >> k;
    //     ll a[n], b[n], need[n];
    //     map<ll, ll> total;
    //     for (i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    //     for (i = 0; i < n; i++)
    //     {
    //         cin >> b[i];
    //         b[i] = abs(b[i]);
    //         total[b[i]] += a[i];
    //     }
    //     ll rem = 0;
    //     ll last = 0;
    //     bool ans = true;
    //     for (auto x : total)
    //     {
    //         ll can = (x.first - last) * k + rem;
    //         rem = can - x.second;
    //         last = x.first;
    //         //    cout << rem << " ";
    //         if (rem < 0)
    //         {
    //             cout << "NO\n";
    //             ans = false;
    //             break;
    //         }
    //         //    cout << x.first << " " << x.second << "\n";
    //     }
    //     if (ans)
    //         cout << "YES\n";

    //   cout << "\n";
}