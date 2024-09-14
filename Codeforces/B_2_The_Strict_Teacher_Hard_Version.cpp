///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

// Data Type:
typedef long long ll;
typedef set<ll> sl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// Shortcut:
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(a) (a).begin(), (a).end()

// Const value:
const ll infLL = 9000000000000000000;
#define MOD 1000000007

// Optimize cin cout:
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k, pos, i;
        cin >> n >> m >> k;
        sl s;
        for (i = 0; i < m; i++)
        {
            ll temp;
            cin >> temp;
            s.insert(temp);
        }
        while (k--)
        {
            cin >> pos;
            s.insert(pos);
            ll ans = -1;
            auto it = s.find(pos);
            if (it == s.begin())
            {
                ans = *next(it) - 1;
            }
            else if (next(it) == s.end())
            {
                ans = n - *prev(it);
            }
            else
            {
                ll mid = (*next(it) + *prev(it)) / 2;
                ll temp1 = abs(mid - *prev(it));
                ll temp2 = abs(mid - *next(it));
                ans = min(temp1, temp2);
            }
            cout << ans << "\n";

            s.erase(pos);
        }
    }
}
