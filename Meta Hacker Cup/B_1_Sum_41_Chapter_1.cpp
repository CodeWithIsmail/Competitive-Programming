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
const ll mx = 1e9;
int main()
{
    optimize();
    ll mx = 1e9,i;
    vl prime;
    vector<bool> isPrime(mx + 1, true);
    isPrime[0] = isPrime[1] = false;
    for ( i = 2; i * i <= mx; ++i)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= mx; j += i)
            {
                isPrime[j] = false;
            }
            prime.push_back(i);
        }
    }

    for ( i = sqrt(mx) + 1; i <= mx; ++i)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
        }
    }

    cout << prime.size() << "\n";
    ll t;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        ll n, j, current = 2, sum = 0;
        cin >> n;
        // vl v;
        // while (n > 1)
        // {
        //     if (n % current == 0)
        //     {
        //         ll temp = 1;
        //         while (n % current == 0)
        //         {
        //             temp *= current;
        //             n /= current;

        //             v.pb(current);
        //             sum += current;
        //         }
        //     }
        //     if (current == 2)
        //         current++;
        //     else
        //         current += 2;
        // }
        // cout << "Case #" << i << ": ";
        // ll need = 41 - sum;
        // if (need < 0)
        //     cout << -1;
        // else
        // {
        //     for (j = 1; j <= need; j++)
        //         v.pb(1);
        //     cout << v.size() << " ";
        //     for (auto x : v)
        //         cout << x << " ";
        // }
        // cout << "\n";
    }
}