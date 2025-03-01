///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

/*

sample problem:

https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1240
https://www.spoj.com/problems/ETF/

*/

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
bool isPrime[mx];
vl primes;
void primeGen(ll limit)
{
    int i, j;
    isPrime[2] = true;
    for (i = 3; i <= limit; i += 2)
        isPrime[i] = true;
    primes.push_back(2);
    for (i = 3; i <= sqrt(limit); i += 2)
    {
        if (isPrime[i])
        {
            for (j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (i = 3; i <= limit; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
ll PHI(ll n)
{
    ll phi = n;
    for (auto x : primes)
    {
        if (x * x > n)
            break;
        if (n % x == 0)
        {
            phi /= x;
            phi *= (x - 1);
            while (n % x == 0)
            {
                n /= x;
            }
        }
    }
    if (n > 1)
    {
        phi /= n;
        phi *= (n - 1);
    }
    return phi;
}
int main()
{
    optimize();
    primeGen(1e7);
    ll n;
    cin >> n;
    cout << PHI(n);
}