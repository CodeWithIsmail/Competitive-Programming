#include <bits/stdc++.h>
using namespace std;

// Data Type:
typedef long long ll;
typedef vector<ll> vl;

// Shortcut:
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define gcd(a, b) __gcd(a, b)
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    ll x, ans = LONG_LONG_MAX, a = 0, b = 0, d1, d2;
    cin >> x;
    for (ll i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            d1 = i;
            d2 = x / i;
            if (gcd(d1, d2) == 1)
            {
                ll temp = max(d1, d2);
                if (ans > temp)
                {
                    a = d1;
                    b = d2;
                    ans = temp;
                }
            }
        }
    }

    cout << a << " " << b;
}
