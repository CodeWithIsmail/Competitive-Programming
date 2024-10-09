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

const ll mx = 1e7 + 12;
vl power4th, primes, spPrimes;
bool isPrime[mx];

void primeGen()
{
    ll i, j;
    primes.pb(2);
    for (i = 3; i <= mx; i += 2)
        isPrime[i] = true;
    for (i = 3; i <= sqrt(mx); i += 2)
    {
        if (isPrime[i])
        {
            for (j = i * i; j <= mx; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (i = 3; i <= mx; i += 2)
    {
        if (isPrime[i])
            primes.pb(i);
    }
}
void gen4thpower()
{
    for (ll i = 1;; i++)
    {
        ll temp = i * i * i * i;
        if (temp > 1e7)
            break;
        power4th.pb(temp);
    }
}
void getSpecialPrime()
{
    for (auto x : primes)
    {
        for (auto z : power4th)
        {
            if (z > x)
                break;
            ll need = x - z;
            ll root = sqrt(need);
            if (root * root == need)
            {
                spPrimes.pb(x);
                break;
            }
        }
    }
}

int main()
{
    optimize();
    gen4thpower();
    primeGen();
    getSpecialPrime();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, ans = 0;
        cin >> n;
        cout << upper_bound(all(spPrimes), n) - spPrimes.begin() << "\n";
    }
}