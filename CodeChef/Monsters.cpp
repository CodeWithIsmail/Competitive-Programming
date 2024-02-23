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

const ll mx = 1e6 + 12;
bool isPrime[mx];
vl val, primes;

void primeGen()
{
    ll i, j;
    isPrime[0] = isPrime[2] = true;
    for (i = 3; i <= mx; i += 2)
        isPrime[i] = true;
    for (i = 3; i <= sqrt(mx); i += 2)
    {
        if (isPrime[i])
        {
            for (j = i * i; j <= mx; j += i)
                isPrime[j] = false;
        }
    }
    primes.pb(0), primes.pb(2);
    for (i = 3; i <= mx; i += 2)
    {
        if (isPrime[i])
            primes.pb(i);
    }
}
void valGen()
{
    ll i = 2;
    val.pb(0);
    while (i + val.back() <= mx)
    {
        val.pb(i + val.back()), i *= 2;
    }
}
int main()
{
    optimize();
    ll t;
    cin >> t;
    primeGen();
    valGen();
    while (t--)
    {
        ll n, i, ans = -1;
        cin >> n;
        if (isPrime[n])
        {
            cout << 1 << "\n";
            continue;
        }
        n--;
        ll prIndex = upper_bound(all(primes), n) - primes.begin() - 1;
        for (i = prIndex; i >= 0; i--)
        {
            ll rem = n - primes[i];
            ll index = upper_bound(all(val), rem) - val.begin() - 1;
            if (val[index] == rem)
            {
                ans = index + 1;
                if (i > 0)
                    ans++;
                break;
            }
        }
        cout << ans << "\n";
    }
}