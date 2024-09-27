// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to perform Sieve of Eratosthenes and return a vector of booleans
// // where prime[i] is true if i is a prime number.
// vector<bool> sieve(int max_limit) {
//     vector<bool> prime(max_limit + 1, true);
//     prime[0] = prime[1] = false; // 0 and 1 are not prime numbers

//     for (int i = 2; i * i <= max_limit; ++i) {
//         if (prime[i]) {
//             for (int j = i * i; j <= max_limit; j += i) {
//                 prime[j] = false; // Marking non-prime numbers
//             }
//         }
//     }
//     return prime;
// }

// // Function to count primes in the range [n, m]
// int countPrimesInRange(const vector<bool>& prime, int n, int m) {
//     int count = 0;
//     for (int i = n; i <= m; ++i) {
//         if (prime[i]) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int t; // number of test cases
//     cin >> t;

//     // Since n <= m, we need to determine the maximum value of m from input
//     int max_m = 0;
//     vector<pair<int, int>> queries(t);

//     for (int i = 0; i < t; ++i) {
//         int n, m;
//         cin >> n >> m;
//         queries[i] = {n, m};
//         max_m = max(max_m, m);
//     }

//     // Use Sieve of Eratosthenes to find all primes up to max_m
//     vector<bool> prime = sieve(max_m);

//     // Process each query and output the result
//     for (const auto& [n, m] : queries) {
//         cout << countPrimesInRange(prime, n, m) << endl;
//     }

//     return 0;
// }

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

const ll mx = 1e6 + 123;
map<ll, bool> isPrime;
vl primes;
void sieve()
{
    ll i, j;
    for (i = 3; i <= sqrt(mx); i += 2)
    {
        if (isPrime[i] == false)
        {
            for (j = 2 * i; j <= mx; j += i)
                isPrime[j] = true;
        }
    }
    primes.pb(2);
    for (i = 3; i <= mx; i += 2)
    {
        if (isPrime[i] == false)
            primes.pb(i);
    }
}
int main()
{
    optimize();
    ll t;
    cin >> t;
    sieve();
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        auto it1 = upper_bound(all(primes), y);
        auto it2 = lower_bound(all(primes), x);
        cout << it1 - it2 << "\n";
    }
}