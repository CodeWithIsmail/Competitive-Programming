///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

// Data Type:
typedef long long ll;

// Shortcut:
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
        ll a, b, k;
        cin >> a >> b >> k;
        ll low = 0, high = 1e18;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll odd = mid / b + 1;
            ll even = 0;
            if (mid >= a)
                even = (mid - a) / b + 1;
            if (odd + even >= k)
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout << low << "\n";
    }
}
