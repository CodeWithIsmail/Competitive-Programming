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
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");

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

const ll mx = 1e5 + 123;
bitset<mx> isPrime;
vector<ll> primes;
ll cntPrime[mx];

void primeGen(ll n)
{
    for (ll i = 3; i <= n; i += 2)
        isPrime[i] = 1;

    ll sq = sqrt(n);
    for (ll i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i] == 1)
        {
            primes.push_back(i);
        }
    }
}
map<ll, vl> ch;
void primeFactors(ll n)
{
    vector<ll> factors;
    for (auto p : primes)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            ll count = 0;
            while (n % p == 0)
            {
                count++;
                n /= p;
            }
            ch[p].pb(count);
        }
    }

    if (n > 1)
        ch[n].pb(1);
}

int main()
{
    optimize();
    primeGen(mx);
    ll n, j, i;
    cin >> n;
    set<ll> s;

    for (i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        s.insert(temp);
    }

    for (auto x : s)
        primeFactors(x);

    bool ans = true;
    for (auto x : ch)
    {
        if (x.first == 2 || x.first == 3)
            continue;
        sort(all(x.second));
        if (x.second.front() != x.second.back() || x.second.size() != s.size())
        {
            ans = false;
            break;
        }
    }
    if (ans)
        Yes else No
}