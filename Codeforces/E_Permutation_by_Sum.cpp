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
        ll n, l, r, s, i, j;
        cin >> n >> l >> r >> s;
        ll a[n + 1] = {0};
        ll div = s / (r - l + 1);
        ll rem = s % (r - l + 1);
        for (i = l; i <= r; i++)
            a[i] = div;

        i = l, j = r;
        while (rem > 0)
        {
            a[j]++;
            rem--;
            j--;
            if (rem == 0)
                break;
            a[i]++;
            rem--;
            i++;
        }
        // for (i = r; i >= l && rem > 0; i--)
        // {
        //     a[i]++;
        //     rem--;
        // }

        for (i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
        i = l, j = r;
        ll current = 1;
        while (i < j)
        {
            if (a[j] + current > n || a[i] - current < 1)
                break;
            a[i] -= current;
            a[j] += current;
            i++;
            j--;
            current++;
        }
        map<ll, ll> check;
        bool ans = true;
        for (i = l; i <= r; i++)
        {
            if (a[i] > n || a[i] < 1)
            {
                cout << "\nout of range\n";
                ans = false;
                //   break;
            }
            check[a[i]]++;
        }
        for (auto x : check)
        {
            if (x.second > 1)
            {
                cout << x.first << "\nmultiple\n";
                ans = false;
                //   break;
            }
        }
        // if (!ans)
        // {
        //     cout << "-1\n";
        //     continue;
        // }

        for (i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                for (j = 1; j <= n; j++)
                {
                    if (check[j] == 0)
                    {
                        a[i] = j;
                        check[j]++;
                        break;
                    }
                }
            }
        }
        for (i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}