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
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define No printf("No\n")

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

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll mx = *max_element(all(a));
    vector<ll> div(mx + 1, 0);

    // Count the divisors for each number
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                div[j]++;
                if (j != a[i] / j)
                    div[a[i] / j]++;
            }
        }
    }

    vector<ll> count(n + 1, 0);

    // Calculate the maximum number with at least j elements
    for (ll j = 1; j <= n; j++)
    {
        for (ll i = mx; i >= 1; i--)
        {
            if (div[i] >= j)
            {
                count[j] = i;
                break;
            }
        }
    }

    for (ll i = 1; i <= n; i++)
        cout << count[i] << " ";
    cout << endl;

    return 0;
}
